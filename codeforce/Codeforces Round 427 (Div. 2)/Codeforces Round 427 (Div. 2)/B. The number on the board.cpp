//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//typedef long long ll;
//
//int main() {
//	ll k; string n;
//	cin >> k >> n;
//	ll c[10] = { 0 };
//	ll sum = 0;
//	for (char ch : n) {
//		c[ch - '0']++;
//		sum += ch - '0';
//	}
//	if (sum >= k) {
//		cout << 0 << endl;
//		return 0;
//	}
//	ll ans = 0;
//	ll diff = k - sum;
//	for (ll i = 0; i < 10; i++) {
//		if (c[i]) {
//			if (diff <= (9 - i) * c[i]) {
//				ans += diff / (9 - i);
//				if (diff % (9 - i)) ans++;
//				cout << ans << endl;
//				return 0;
//			}
//			else {
//				diff -= c[i] * (9 - i);
//				ans += c[i];
//			}
//		}
//	}
//	cout << ans << endl;
//}