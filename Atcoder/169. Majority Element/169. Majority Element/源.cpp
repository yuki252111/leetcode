#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int size = nums.size();
		if (size == 0) {
			return 0;
		}
		int res = nums[0];
		int count = 1;
		for (int i = 1; i < size; i++) {
			if (nums[i] == res) {
				count += 1;
			}
			else {
				count -= 1;
			}
			if (count == 0) {
				count = 1;
				res = nums[i];
			}
		}
		return res;
	}
};

int main() {
	Solution s;
	vector<int> nums = {
		8, 8, 7, 7, 7
	};
	s.majorityElement(nums);
}