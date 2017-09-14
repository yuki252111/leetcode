#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int A[105][105] = { 0 };
int H, W;
int C[10005];
int N;
bool paint(int c);
bool dfs(int num, int type, int x, int y) {
	A[x][y] = type;
	num--;
	if (num > 0) {
		if (x + 1 <= H  && A[x + 1][y] == 0) {
			if (dfs(num, type, x + 1, y)) {
				return true;
			}
		}
		if (x - 1 >= 1 && A[x - 1][y] == 0) {
			if (dfs(num, type, x - 1, y)) {
				return true;
			}
		}
		if (y + 1 <= W && A[x][y + 1] == 0) {
			if (dfs(num, type, x, y + 1)) {
				return true;
			}
		}
		if (y - 1 >= 1 && A[x][y - 1] == 0) {
			if (dfs(num, type, x, y - 1)) {
				return true;
			}
		}
	}
	else {
		if (type == N || paint(type + 1))
			return true;
	}
	A[x][y] = 0;
	return false;
}

bool paint(int c) {
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			if (A[i][j] == 0 && dfs(C[c], c, i, j)) return true;
		}
	}
	return false;
}

int main() {
	cin >> H >> W >> N;
	for (int i = 1; i <= N; i++) cin >> C[i];
	paint(1);
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}