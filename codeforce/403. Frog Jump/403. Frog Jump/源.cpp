#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	typedef long long ll;
	bool canCross(vector<int>& stones) {
		ll n = stones.size();
		vector<bool> dp(stones[n - 1] * 1ll + 1ll, false);
		dp[stones[n - 1] * 1ll] = true;
		for (int i = n - 2; i >= 0; i--) {
			ll k1 = stones[i];
			ll k2 = k1 + 1;
			ll k3 = k2 - 1;
			if (k1 + stones[i] < dp.size() && dp[k1 + stones[i]]) dp[stones[i]] = true;
			if (k2 + stones[i] < dp.size() && dp[k2 + stones[i]]) dp[stones[i]] = true;
			if (k3 + stones[i] < dp.size() && k3 + stones[i] >= 0 &&
				dp[k3 + stones[i]]) dp[stones[i]] = true;
		}
		return dp[stones[0]];
	}
};

int main() {
	vector<int> stones = { 0, 1, 3, 5, 6, 8, 12, 17 };
	Solution s;
	s.canCross(stones);
}