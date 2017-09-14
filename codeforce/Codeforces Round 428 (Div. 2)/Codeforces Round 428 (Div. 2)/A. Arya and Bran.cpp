//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, k;
//int a[105] = { 0 };
//int sum[105] = { 0 };
//int dp[105][10005] = { 0 };
//
//int main() {
//	cin >> n >> k;
//	sum[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		sum[i] = sum[i - 1] + a[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= k; j++) {
//			if (i == 1) {
//				if (min(a[i], 8) >= j) {
//					dp[i][j] = 1;
//				}
//				else {
//					dp[i][j] = 0;
//				}
//				continue;
//			}
//			if (min(a[i], 8) >= j) {
//				dp[i][j] = 1;
//				continue;
//			}
//			for (int l = i - 1; l >= 1; l--) {
//				if (j > min(a[i], 8)) {
//					if (dp[l][j - min(a[i], 8)] != 0) {
//						if (dp[i][j] == 0) dp[i][j] = dp[l][j - min(a[i], 8)] + 1;
//						else dp[i][j] = min(dp[i][j], dp[l][j - min(a[i], 8)] + 1);
//					}
//				}
//			}
//		}
//	}
//	int ans = -1;
//	for (int i = 1; i <= n; i++) {
//		if (dp[i][k] != 0) {
//			if (ans == -1) ans = dp[i][k];
//			else ans = min(ans, dp[i][k]);
//		}
//	}
//	cout << ans << endl;
//}