//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n;
//int d[105] = { 0 };
//int dp[105] = { 0 };
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> d[i];
//	dp[n] = 1;
//	for (int i = n - 1; i >= 1; i--) {
//		if (d[i] == 0) dp[i] = dp[i + 1] + 1;
//		else {
//			int cnt = 0;
//			for (int j = i + 1; j <= n; j++) if (d[j] == 0) cnt++;
//			dp[i] = max(dp[i + 1], n - i + 1 - cnt);
//		}
//	}
//	cout << dp[1] << endl;
//}