#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, q, c;
int axis[105][105] = { 0 };
int sum[105][105] = { 0 };
vector<vector<vector<int>>> star(105, vector<vector<int>>(105, vector<int>()));

int lowbit(int x) {
	return x & (-x);
}

void update(int x, int y, int val) {
	for (int i = x; i <= 100; i+=lowbit(i)) {
		for (int j = y; j <= 100; j += lowbit(j)) {
			sum[x][y] += val;
		}
	}
}

int getsum(int x, int y) {
	int ans = 0;
	for (int i = x; i > 0; i -= lowbit(i)) {
		for (int j = y; j > 0; j -= lowbit(j)) {
			ans += sum[i][j];
		}
	}
	return ans;
}

int main() {
	cin >> n >> q >> c;
	for (int i = 0; i < n; i++) {
		int x, y, v;
		cin >> x >> y >> v;
		axis[x][y] += v;
		star[x][y].push_back(v);
	}
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			update(i, j, axis[i][j]);
		}
	}

	for (int i = 1; i <= 1; i++) {
		int t, x1, y1, x2, y2;
		cin >> t >> x1 >> y1 >> x2 >> y2;
		
	}
}