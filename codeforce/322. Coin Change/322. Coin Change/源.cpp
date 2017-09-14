#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int coinChange(vector<int>& coins, int amount) {
		int n = coins.size();
		if (amount == 0) return 0;
		if (n == 0) return -1;
		vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
		dp[0][0] = 0;
		for (int i = 1; i <= n; i++) dp[i][0] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= amount; j++) {
				dp[i][j] = dp[i - 1][j];
				if (j >= coins[i - 1]) {
					if (dp[i][j - coins[i - 1]] != -1) {
						if (dp[i][j] == -1) dp[i][j] = dp[i][j - coins[i - 1]] + 1;
						else dp[i][j] = min(dp[i][j], dp[i][j - coins[i - 1]] + 1);
					}
				}
			}
		}
		return dp[n][amount];
	}
};

int main() {
	vector<int> coins = { 1, 2, 5 };
	Solution s;
	int res = s.coinChange(coins, 11);
}