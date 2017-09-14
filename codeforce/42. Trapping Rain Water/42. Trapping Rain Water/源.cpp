#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	int trap(vector<int>& height) {
		int n = height.size(), mx = 0;
		if (n < 3) return 0;
		vector<int> dp(n, 0);
		for (int i = 0; i < n; i++) {
			dp[i] = mx;
			mx = max(dp[i], height[i]);
		}
		mx = 0;
		int ans = 0;
		for (int i = n - 1; i >= 0; i--) {
			dp[i] = min(dp[i], mx);
			mx = max(dp[i], height[i]);
			if (dp[i] > height[i]) ans += dp[i] - height[i];
		}
		return ans;
	}
};

int main() {
	vector<int> nums = { 2, 0, 2 };
	Solution s;
	s.trap(nums);
}