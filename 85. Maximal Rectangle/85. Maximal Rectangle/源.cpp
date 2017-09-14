#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
	int maximalRectangle(vector<vector<char>>& matrix) {
		int m = matrix.size();
		if (m == 0) {
			return 0;
		}
		int n = matrix[0].size();
		if (n == 0) {
			return 0;
		}
		vector<vector<int>> heights(m, vector<int>(n, 0));
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0) {
					if (matrix[i][j] == '1') {
						heights[i][j] = 1;
					}
				}
				else {
					if (matrix[i][j] == '1') {
						heights[i][j] = heights[i - 1][j] + 1;
					}
				}
			}
		}
		int res = 0;
		for (int i = 0; i < m; i++) {
			res = max(res, getHeight(heights[i]));
		}
		return res;
	}

	int getHeight(vector<int>  heights) {
		if (heights.size() == 0) {
			return 0;
		}
		heights.push_back(0);
		stack<int> s;
		int size = heights.size();
		int res = 0;
		for (int i = 0; i < size; i++) {
			if (s.empty() || heights[i] > heights[s.top()]) {
				s.push(i);
			}
			else {
				while (!s.empty() && heights[i] <= heights[s.top()]) {
					int h = heights[s.top()];
					s.pop();
					int w = s.empty() ? i : i - 1 - s.top();
					res = max(res, w * h);
				}
				s.push(i);
			}
		}
		return res;
	}
};

int main() {
	vector<vector<char>> matrix = { {'1','0','1','0','0'}, {'1',
		'0','1','1','1'}, 
		{'1','1','1','1','1'}, 
		{'1','0','0','1','0' } };
	Solution s;
	s.maximalRectangle(matrix);
}