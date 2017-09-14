#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
	bool isPossible(vector<int>& nums) {
		if (nums.size() < 3) return false;
		return help(nums);
	}

	bool help(vector<int> nums) {
		int n = nums.size();
		if (n == 0) return true;
		if (n < 3) return false;
		
		for (int len = 3; len <= n; len++) {
			
		}
	}
};

int main() {
	vector<int> nums = { 1,2,3,4,4,5 };
	Solution s;
	bool res = s.isPossible(nums);
}