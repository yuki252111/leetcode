#include <iostream>
#include <vector>
#include <string>
using namespace std;

int rows, cols, k;

bool find(int i, int j, vector<vector<char>>& matrix, 
		vector<vector<int>>& visited, int& times) {
	if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1) {
		return true;
	}
	visited[i][j] = 1;

}

int main() {
	cin >> rows >> cols >> k;
	int start_i = 0, start_j = 0;
	vector<vector<char>> matrix(rows, vector<char>(cols, 0));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
			if (matrix[i][j] == 'S') {
				start_i = i;
				start_j = 1;
			}
		}
	}
	vector<vector<int>> visited(rows, vector<int>(cols, 0));
	int times = 0;
	find(start_i,start_j, matrix, visited, times);
	if (times == 0) {
		cout << -1 << endl;
	}
	else {
		cout << times << endl;
	}
}