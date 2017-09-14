#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
		if (n <= 1) return;
		help(matrix, 0, 0, n);
	}

	void help(vector<vector<int>>& matrix, int x, int y, int size) {
		if (size == 1) {
			return;
		}
		for (int i = 0; i < size - 1; i++) {
			int t1 = matrix[x][y + i];
			matrix[x][y + i] = matrix[x + size - 1 - i][y];
			matrix[x + size - 1 - i][y] = matrix[x + size - 1][y + size - 1 - i];
			matrix[x + size - 1][y + size - 1 - i] = matrix[x + i][y + size - 1];
			matrix[x + i][y + size - 1] = t1;
		}
		if (size - 2 > 0) help(matrix, x + 1, y + 1, size - 2);
	}
};

int main() {
	vector<vector<int>> matrix = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	Solution s;
	s.rotate(matrix);
}