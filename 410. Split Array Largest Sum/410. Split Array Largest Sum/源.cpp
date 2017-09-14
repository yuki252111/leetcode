#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int splitArray(vector<int>& nums, int m) {
		int n = nums.size();
		vector<vector<int>> dp(n, vector<int>(m + 1, -1));
		vector<int> sums(n + 1, 0);
		for (int i = 1; i <= n; i++) sums[i] = sums[i - 1] + nums[i - 1];
		dp[n - 1][1] = nums[n - 1];
		for (int i = n - 2; i >= 0; i--) dp[i][1] = dp[i + 1][1] + nums[i];
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 2; j <= m; j++) {
				for (int k = i + 1; k < n; k++) {
					if (dp[k][j - 1] != -1) {
						dp[i][j] = dp[i][j] == -1 ? max(sums[k] - sums[i], dp[k][j - 1]) :
							min(dp[i][j], max(sums[k] - sums[i], dp[k][j - 1]));
					}
				}
			}
		}
		return dp[0][m];
	}
};

int main() {
	vector<int> nums = { 7, 2, 5, 10, 8 };
	Solution s;
	s.splitArray(nums, 2);
}