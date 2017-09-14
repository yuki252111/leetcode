#include <vector>
#include <algorithm>
#include <iostream>
#include <deque>
using namespace std;

class Solution {
public:
	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		int size = nums.size();
		vector<int> res;
		if (size == 0) {
			return res;
		}
		deque<int> dq;
		for (int i = 0; i < k; i++) {
			if (dq.empty()) {
				dq.push_back(i);
			}
			else {
				while (!dq.empty() && nums[i] > nums[dq.back()]) {
					dq.pop_back();
				}
				dq.push_back(i);
			}
		}
		res.push_back(nums[dq.front()]);
		for (int i = k; i < size; i++) {
			if (dq.empty()) {
				dq.push_back(i);
			}
			else {
				if (i - dq.front() >= k) {
					dq.pop_front();
				}
				while (!dq.empty() && nums[i] > nums[dq.back()]) {
					dq.pop_back();
				}
				dq.push_back(i);
			}
			res.push_back(nums[dq.front()]);
		}
		return res;
	}
};

int main() {
	vector<int> nums = {1, 3, 1, 2, 0, 5
	};
	Solution s;
	s.maxSlidingWindow(nums, 3);
}