#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		vector<int> ans;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (nums[mid] == target) {
				int i = mid;
				while (i >= 0 && nums[i] == target) i--;
				ans.push_back(i + 1);
				i = mid;
				while (i < nums.size() && nums[i] == target) i++;
				ans.push_back(i - 1);
				return ans;
			}
			else if (nums[mid] < target) {
				l = mid + 1;
			}
			else {
				r = mid - 1;
			}
		}
		return { -1, -1 };
	}
};

int main() {
	vector<int> nums = { 5, 7, 7, 8, 8, 10 };
	Solution s;
	vector<int> res = s.searchRange(nums, 8);
}