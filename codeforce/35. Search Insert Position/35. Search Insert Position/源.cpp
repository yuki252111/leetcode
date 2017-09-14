#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int n = nums.size();
		if (n == 0) return 0;
		if (nums[n - 1] < target) return n;
		int l = 0, r = n - 1, ans = n - 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (nums[mid] == target) {
				return mid;
			}
			else if (nums[mid] < target) {
				l = mid + 1;
			}
			else {
				ans = min(mid, ans);
				r = mid - 1;
			}
		}
		return ans;
	}
};

int main() {
	vector<int> nums = { 1,3,5,6 };
	Solution s;
	int res = s.searchInsert(nums, 5);
}