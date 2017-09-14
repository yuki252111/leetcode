//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int as[1005];
//int bs[1005];
//int cs[1005];
//int ds[1005];
//int es[1005];
//int n;
//int xs[12][12];
//int ys[12][12];
//int zs[12][12];
//int us[12][12];
//int vs[12][12];
//
//bool check(int i) {
//	for (int j = 1; j <= n; j++) {
//		for (int k = 1; k <= n ; k++) {
//			if (j != k && j != i && k != i) {
//				int d = xs[i][j] * xs[i][k] + ys[i][j] * ys[i][k] + zs[i][j] * zs[i][k] + us[i][j] * us[i][k]
//					+ vs[i][j] * vs[i][k];
//				if (d > 0) return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> as[i] >> bs[i] >> cs[i] >> ds[i] >> es[i];
//	if (n > 11) {
//		cout << 0 << endl;
//	}
//	else {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				if (i != j) {
//					xs[i][j] = as[j] - as[i]; ys[i][j] = bs[j] - bs[i];
//					zs[i][j] = cs[j] - cs[i]; us[i][j] = ds[j] - ds[i];
//					vs[i][j] = es[j] - es[i];
//				}
//			}
//		}
//		int cnt = 0;
//		vector<int> vt;
//		for (int i = 1; i <= n; i++) {
//			if (check(i)) {
//				cnt++;
//				vt.push_back(i);
//			}
//		}
//		cout << cnt << endl;
//		if (cnt > 0) {
//			for (int idx : vt) cout << idx << " ";
//			cout << endl;
//		}
//	}
//}