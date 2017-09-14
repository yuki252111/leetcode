//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//int q, h, s, d, n;
//ll one, two, three, four;
//
//int main() {
//	cin >> q >> h >> s >> d >> n;
//	one = q;
//	two = min(1ll * q * 2, 1ll * h);
//	three = min(min(1ll * q * 4, 1ll * h * 2), 1ll * s);
//	four = min(min(min(1ll * q * 8, 1ll * h * 4), 1ll * s * 2), 1ll * d);
//	ll ans = 0;
//	ans += (n / 2) * four;
//	n -= (n / 2) * 2;
//	ans += n * three;
//	cout << ans << endl;
//}