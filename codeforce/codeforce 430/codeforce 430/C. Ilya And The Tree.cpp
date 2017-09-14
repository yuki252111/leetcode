#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;

int n;

int gcd(int a, int b) {
	if (a < b) swap(a, b);
	while (b) {
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}

void dfs(vector<int>& vs, vector<vector<int>>& es, vector<bool>& vi, vector<set<int>>& s, int pos, int par, int n_gcd) {
	auto iter = s[par].begin();
	while (iter != s[par].end()) s[pos].insert(gcd(*iter++, vs[pos]));
	s[pos].insert(n_gcd);
	auto ne = es[pos];
	vi[pos] = true;
	for (int i = 0; i < ne.size(); i++) {
		if (vi[ne[i]] == false) {
			dfs(vs, es, vi, s, ne[i], pos, gcd(n_gcd, vs[pos]));
		}
	}
}

int main() {
	cin >> n;
	vector<int> vs(n + 1, 0);
	vector<bool> vi(n + 1, false);
	for (int i = 1; i <= n; i++) cin >> vs[i];
	vector<vector<int>> es(n + 1, vector<int>());
	for (int i = 1; i < n; i++) {
		int t1, t2;
		cin >> t1 >> t2;
		es[t1].push_back(t2);
		es[t2].push_back(t1);
	}
	vector<set<int>> s(n + 1, set<int>());
	s[0].insert(0);
	dfs(vs, es, vi, s, 1, 0, 0);
	for (int i = 1; i <= n; i++) {
		cout << (*s[i].rbegin()) << " ";
	}
	cout << endl;
}