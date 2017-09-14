//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <memory.h>
//using namespace std;
//
//typedef long long ll;
//int n;
//ll ys[1005];
//bool vs[1005];
//
//bool check(double k, ll b) {
//	memset(vs, false, sizeof(vs));
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) {
//		if (ys[i] - b == k * (i - 1)) {
//			cnt++;
//			vs[i] = true;
//		}
//	}
//	if (cnt == n) return false;
//	if (cnt == n - 1) return true;
//	int pos1 = 0;
//	for (int i = 1; i <= n; i++) {
//		if (!vs[i]) {
//			pos1 = i; break;
//		}
//	}
//	for (int i = pos1 + 1; i <= n; i++) {
//		if (!vs[i]) {
//			if (ys[i] - ys[pos1] != k * (i - pos1)) return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> ys[i];
//	bool ans = false;
//	ans |= check(1.0 *(ys[2] - ys[1]), ys[1]);
//	ans |= check(0.5*(ys[3] - ys[1]), ys[1]);
//	ans |= check(1.0 *(ys[3] - ys[2]), 2 * ys[2] - ys[3]);
//	if (ans) cout << "Yes" << endl;
//	else cout << "No" << endl;
//}