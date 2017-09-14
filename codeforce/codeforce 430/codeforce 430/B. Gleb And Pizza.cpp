//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int r, d, w, n;
//
//int main() {
//	cin >> r >> d >> n;
//	w = r - d;
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		int xi, yi, ri;
//		cin >> xi >> yi >> ri;
//		int dis = xi * xi + yi * yi;
//		int ris = (w + ri) * (w + ri);
//		int mris = (r - ri) * (r - ri);
//		if (dis >= ris && dis <= mris) ans++;
//	}
//	cout << ans << endl;
//}