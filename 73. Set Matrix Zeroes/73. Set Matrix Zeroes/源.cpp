#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		int m = matrix.size();
		if (m == 0) {
			return;
		}
		int n = matrix[0].size();
		if (n == 0) {
			return;
		}
		vector<int> rows;
		vector<int> cols;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == 0) {
					rows.push_back(i);
					cols.push_back(j);
				}
			}
		}
		for (int i = 0; i < rows.size(); i++) {
			for (int j = 0; j < n; j++) {
				matrix[rows[i]][j] = 0;
			}
		}
		for (int i = 0; i < cols.size(); i++) {
			for (int j = 0; j < m; j++) {
				matrix[j][cols[i]] = 0;
			}
		}
	}
};

int main() {
	Solution s;
	vector<vector<int>> matrix = {
		{0,0,0,5},{4,3,1,4},{0,1,1,4},{1,2,1,3},{0,0,1,1}
	};
	s.setZeroes(matrix);
}