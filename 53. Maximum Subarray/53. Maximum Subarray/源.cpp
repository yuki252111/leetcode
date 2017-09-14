#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int ans = INT32_MIN, sum = 0;
		for (int num : nums) {
			sum = max(sum + num, num);
			ans = max(ans, sum);
		}
		return ans;
	}
};

int main() {
	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
	Solution s;
	s.maxSubArray(nums);
}