#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		
		int size = nums.size();
		vector<int> res;
		if (size == 0) {
			return res;
		}
		vector<int> prev(size, 0);
		vector<int> post(size, 0);
		prev[0] = 1;
		post[size - 1] = 1;
		for (int i = 1; i < size; i++) {
			prev[i] = prev[i - 1] * nums[i - 1];
			post[size - 1 - i] = post[size - i] * nums[size - i];
		}
		for (int i = 0; i < size; i++) {
			res.push_back(prev[i] * post[i]);
		}
		return res;
	}
};

int main() {
	Solution s;
	vector<int> nums = { 0, 0 };
	s.productExceptSelf(nums);
}