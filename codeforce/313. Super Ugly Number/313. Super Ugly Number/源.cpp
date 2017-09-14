#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int nthSuperUglyNumber(int n, vector<int>& primes) {
		if (n == 1) return 1;
		int k = primes.size();
		vector<int> idx(k, 1);
		vector<int> dp(n + 1, 0);
		dp[1] = 1;
		for (int i = 2; i <= n; i++) {
			dp[i] = dp[idx[0]] * primes[0];
			for (int j = 1; j < k; j++) {
				dp[i] = min(dp[i], dp[idx[j]] * primes[j]);
			}
			for (int j = 0; j < k; j++) {
				if (dp[i] == dp[idx[j]] * primes[j]) idx[j]++;
			}
		}
		return dp[n];
	}
};

int main() {
	vector<int> nums = { 2, 7, 13, 19 };
	Solution s;
	s.nthSuperUglyNumber(12, nums);
}