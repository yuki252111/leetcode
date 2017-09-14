#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool isSelfCrossing(vector<int>& x) {
		int x_min = 0, x_max = 0, y_min = 0, y_max = 0, cur_x = 0, cur_y = 0;
		int n = x.size();
		if (n == 0) return false;
		for (int i = 0; i < n; i++) {
			if (i % 4 == 0) {
				if (x[i] + cur_y >= y_min && cur_x <= x_max && cur_x >= x_min) return true;
				cur_y = x[i] + cur_y;
				y_max = max(y_max, cur_y);
			}
			else if (i % 4 == 1) {
				if (cur_x - x[i] <= x_min && cur_y >= y_min && cur_y <= y_max) return true;
				cur_x = cur_x - x[i];
				x_min = min(x_min, cur_x);
			}
			else if (i % 4 == 2) {
				if (cur_y - x[i] <= y_max && cur_x <= x_max && cur_x >= x_min) return true;
				cur_y = cur_y - x[i];
				y_min = min(y_min, cur_y);
			}
			else {
				if (cur_x + x[i] >= x_max && cur_y >= y_min && cur_y <= y_max) return true;
				cur_x = cur_x + x[i];
				x_max = max(x_max, cur_x);
			}
		}
		return false;
	}
};

int main() {
	Solution s;
	vector<int> nums = { 1, 2, 3, 4 };
	bool res = s.isSelfCrossing(nums);
}