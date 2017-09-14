#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;

typedef long long ll;
ll n, k;
ll c[300005];
unordered_map<int, int> m;

struct cmp {
	bool operator() (int a, int b) {
		return c[a] < c[b];
	}
};
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> c[i];
	ll ans = 0;
	priority_queue<int, vector<int>, cmp> pq;
	for (int i = 1; i <= k + 1; i++) pq.push(i);
	ll idx = 1 + k;
	for (int i = k + 2; i <= n; i++) {
		int cur = pq.top(); pq.pop();
		m[cur] = idx++;
		pq.push(i);
		ans += c[cur] * (m[cur] - cur);
	}
	while (pq.size()) {
		int cur = pq.top(); pq.pop();
		m[cur] = idx++;
		ans += c[cur] * (m[cur] - cur);
	}
	cout << ans << endl;
	for (int i = 1; i <= n; i++) {
		cout << m[i] << " ";
	}
	cout << endl;
}