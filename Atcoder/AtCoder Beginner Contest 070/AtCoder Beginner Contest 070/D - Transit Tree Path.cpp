#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
typedef long long ll;
using namespace std;

vector<ll> nodes[100005];
vector<ll> len[100005];
ll di[100005];
ll n, q, k;
ll xs[100005];
ll ys[100005];
bool vi[100005];

struct cmp {
	bool operator()(pair<ll, ll>& a, pair<ll, ll>& b) {
		return a.first < b.first;
	}
};

int main() {
	cin >> n;
	for (ll i = 1; i < n; i++) {
		ll t1, t2, t3;
		cin >> t1 >> t2 >> t3;
		nodes[t1].push_back(t2);
		len[t1].push_back(t3);
		nodes[t2].push_back(t1);
		len[t2].push_back(t3);
	}
	cin >> q >> k;
	priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, cmp > que;
	que.push(pair<ll, ll>(0, k));
	for (int i = 1; i <= n; i++) {
		di[i] = INT64_MAX;
	}
	di[k] = 0;
	while (que.size()) {
		pair<ll, ll> p = que.top(); que.pop();
		ll v = p.second;
		ll d = p.first;
		vi[v] = true;
		for (int i = 0; i < nodes[v].size(); i++) {
			di[nodes[v][i]] = min(di[nodes[v][i]], d + len[v][i]);
			if (vi[nodes[v][i]] == false)
				que.push(pair<ll, ll>(di[nodes[v][i]], nodes[v][i]));
		}
	}
	for (ll i = 1; i <= q; i++) {
		cin >> xs[i] >> ys[i];
	}
	for (ll i = 1; i <= q; i++) {
		cout << 1ll * di[xs[i]] + 1ll * di[ys[i]] << endl;
	}
}