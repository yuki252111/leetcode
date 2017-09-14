#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		int size = heights.size();
		if (size == 0) {
			return 0;
		}
		heights.push_back(0);
		stack<int> s;
		int res = 0;
		for (int i = 0; i < heights.size(); i++) {
			if (s.empty() || heights[i] > heights[s.top()]) {
				s.push(i);
			}
			else {
				while (!s.empty() && heights[i] <=  heights[s.top()]) {
					int h = heights[s.top()];
					s.pop();
					int w = s.empty() ? i : i - s.top() - 1;
					res = max(res, w * h);
				}
				s.push(i);
			}
		}
		return res;
	}
};

int main() {
	vector<int> heights = { 2, 1, 5, 6, 2, 3 };
	Solution s;
	s.largestRectangleArea(heights);
}