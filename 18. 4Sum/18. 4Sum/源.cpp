#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		int n = nums.size();
		if (n < 4) return {};
		sort(nums.begin(), nums.end());
		vector<vector<int>> ans;
		for (int first = 0; first < n; first++) {
			if (first > 0 && nums[first] == nums[first - 1]) continue;
			for (int second = first + 1; second < n; second++) {
				if (second > first + 1 && nums[second] == nums[second - 1]) continue;
				int third = second + 1, four = n - 1;
				while (third < four) {
					if (third > second + 1 && nums[third] == nums[third - 1]) {
						third++; continue;
					}
					int sum = nums[first] + nums[second] + nums[third] + nums[four];
					if (sum == target) {
						ans.push_back({ nums[first], nums[second], nums[third], nums[four] });
						third++; four--;
					}
					else if (sum < target) {
						third++;
					}
					else {
						four--;
					}
				}
			}
		}
		return ans;
	}
};

int main() {
	vector<int> nums = { 1, 0, -1, 0, -2, 2 };
	Solution s;
	s.fourSum(nums, 0);
}