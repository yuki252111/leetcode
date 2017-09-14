//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n, a, b;
//
//int gcd(int a, int b) {
//	while (b) {
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//
//int main() {
//	cin >> n;
//	if (n % 2 == 0) a = n / 2 - 1;
//	else a = n / 2;
//	b = n - a;
//	while (a >= 1 && b <= n - 1) {
//		if (gcd(b, a) == 1) break;
//		a--; b++;
//	}
//	cout << a << " " << b << endl;
//}