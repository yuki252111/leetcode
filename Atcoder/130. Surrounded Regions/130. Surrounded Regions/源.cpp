#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
	void solve(vector<vector<char>>& board) {
		int m = board.size();
		if (m == 0) return;
		int n = board[0].size();
		if (n == 0) return;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == 'O' && (i == 0 || i == m - 1 || j == 0 || j == n - 1)) {
					bfs(board, i, j, m, n);
				}
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == '*') {
					board[i][j] = 'O';
				}
				else {
					board[i][j] = 'X';
				}
			}
		}
	}

	void bfs(vector<vector<char>>& board, int x, int y, int m, int n) {
		vector<vector<int>> dirs = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
		queue<pair<int, int>> q;
		q.push({ x, y });
		while (q.size()) {
			pair<int, int> cur = q.front(); q.pop();
			board[cur.first][cur.second] = '*';
			for (int i = 0; i < 4; i++) {
				int new_x = dirs[i][0] + x, new_y = dirs[i][1] + y;
				if (new_x >= 0 && new_x < m && new_y >= 0 && new_y < n && board[new_x][new_y] == 'O') {
					q.push({ new_x, new_y });
				}
			}
		}
	}
};

int main() {
	vector<vector<char>> board = {
		{'X','X', 'X', 'X'},
		{'X', 'O', 'O', 'X'},
		{'X', 'X', 'O', 'X'},
	{'X' ,'O' ,'X', 'X'}
	};
	Solution s;
	s.solve(board);
}