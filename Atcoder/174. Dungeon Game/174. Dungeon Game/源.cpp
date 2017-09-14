#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
	int calculateMinimumHP(vector<vector<int>>& dungeon) {
		int m = dungeon.size();
		if (m == 0) return 1;
		int n = dungeon[0].size();
		if (n == 0) return 1;
		vector<vector<int>> dp(m, vector<int>(n, 0));
		dp[m - 1][n - 1] = dungeon[m - 1][n - 1] >= 0 ? 1 : 1 - dungeon[m - 1][n - 1];
		for (int i = n - 2; i >= 0; i--) {
			dp[m - 1][i] = max(1, dp[m - 1][i + 1] - dungeon[m - 1][i]);
		}
		for (int i = m - 2; i >= 0; i--) {
			dp[i][n - 1] = max(1, dp[i + 1][n - 1] - dungeon[i][n - 1]);
		}
		for (int i = m - 2; i >= 0; i--) {
			for (int j = n - 2; j >= 0; j--) {
				int t1 = max(1, dp[i + 1][j] - dungeon[i][j]);
				int t2 = max(1, dp[i][j + 1] - dungeon[i][j]);
				dp[i][j] = min(t1, t2);
			}
		}
		return dp[0][0];
	}
};

int main() {
	vector<vector<int>> matrix = {
		{-2, -3, 3},
		{-5, -10, 1},
		{10, 30, -5}
	};
	Solution s;
	int res = s.calculateMinimumHP(matrix);
}