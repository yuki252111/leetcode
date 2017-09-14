//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> nums;
//int n = 0;
//
//int main() {
//	cin >> n;
//	nums.resize(n, 0);
//	for (int i = 0; i < n; i++) cin >> nums[i];
//	vector<vector<bool>> dp(n, vector<bool>(2, false));
//	if (nums[0] % 2 == 1) {
//		dp[0][0] = false;
//		dp[0][1] = true;
//	}
//	for (int i = 1; i < n; i++) {
//		for (int j = i; j >= 0; j -= 2) {
//			if (nums[i] % 2 == 1 && nums[j] % 2 == 1) {
//				if (j == 0) {
//					dp[i][0] = false; dp[i][1] = true;
//				}
//				else {
//					dp[i][0] = dp[j - 1][1];
//					dp[i][1] = dp[j - 1][0];
//				}
//			}
//		}
//	}
//	if (dp[n - 1][1]) cout << "Yes" << endl;
//	else cout << "No" << endl;
//}