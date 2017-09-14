//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//ll balls[100005];
//
//ll gcd(ll x, ll y) {
//	return y == 0 ? x : gcd(y, x % y);
//}
//
//int main() {
//	ll n, k;
//	cin >> n >> k;
//	ll n_max = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> balls[i];
//		n_max = max(balls[i], n_max);
//	}
//	if (n_max < k) {
//		cout << "IMPOSSIBLE" << endl;
//	}
//	else {
//		int g = -1;
//		for (int i = 2; i <= n; i++) {
//			if (g == -1) g = gcd(balls[i], balls[i - 1]);
//			else g = gcd(g, balls[i]);
//		}
//		if (k % g != 0) {
//			cout << "IMPOSSIBLE" << endl;
//		}
//		else {
//			cout << "POSSIBLE" << endl;
//		}
//	}
//}