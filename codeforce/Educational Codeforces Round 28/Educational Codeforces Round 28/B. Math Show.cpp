//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//ll n, k, m, sum;
//vector<ll> st;
//
//ll getpoints(ll num, ll time) {
//	if (num == 0) return 0;
//	ll ans = 0, i = 1;
//	while (time >= st[i] && i <= k) {
//		ll t = min(num, time / st[i]);
//		if (t == 0) break;
//		ans += t;
//		time -= t * st[i];
//		i++;
//	}
//	return ans;
//}
//
//int main() {
//	cin >> n >> k >> m;
//	st.resize(k + 1, 0);
//	sum = 0;
//	for (ll i = 1; i <= k; i++) {
//		cin >> st[i]; sum += st[i];
//	}
//	sort(st.begin(), st.end());
//	ll ans = getpoints(n, m);
//	ll top = m / sum;
//	for (ll i = 1; i <= min(top, n); i++) {
//		ll t = (k + 1) * i;
//		t += getpoints(n - i, m - i * sum);
//		ans = max(ans, t);
//	}
//	cout << ans << endl;
//}