#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (nums[mid] == target) return mid;
			else if (nums[mid] > target) {
				if (nums[l] > nums[mid]) {
					r = mid - 1;
				}
				else if (nums[mid] > nums[r]) {
					if (nums[l] == target) return l;
					else if (nums[l] > target) {
						l = mid + 1;
					}
					else {
						r = mid - 1;
					}
				}
				else {
					r = mid - 1;
				}
			}
			else {
				if (nums[l] > nums[mid]) {
					if (nums[l] == target) return l;
					else if (nums[l] > target) {
						l = mid + 1;
					}
					else {
						r = mid - 1;
					}
				}
				else if (nums[mid] > nums[r]) {
					l = mid + 1;
				}
				else {
					l = mid + 1;
				}
			}
		}
		return -1;
	}
};

int main() {
	vector<int> nums = { 3, 1 };
	Solution s;
	int res = s.search(nums, 4);
}