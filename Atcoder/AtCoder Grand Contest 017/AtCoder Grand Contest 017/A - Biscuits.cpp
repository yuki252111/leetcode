#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int res = 0;
int main() {
	int n, p;
	cin >> n >> p;
	vector<long long> nums(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));
	dp[0][0] = 1;
	dp[0][1] = 0;
	for (int i = 1; i <= n; i++) {
		if (nums[i - 1] % 2 == 1) {
			dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
			dp[i][1] = dp[i - 1][1] + dp[i - 1][0];
		}
		else {
			dp[i][0] = dp[i - 1][0] * 2;
			dp[i][1] = dp[i - 1][1] * 2;
		}
	}
	cout << dp[n][p] << endl;
}