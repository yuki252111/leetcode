#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
	int totalNQueens(int n) {
		if (n == 0) return 0;
		int ans = 0;
		vector<int> oneRes(n, 0);
		help(ans, oneRes, 0, n);
		return ans;
	}
	void help(int& ans, vector<int>& oneRes, int pos, int size) {
		if (pos == size) {
			ans++;
			return;
		}
		for (int i = 0; i < size; i++) {
			bool can = true;
			for (int j = pos - 1; j >= 0; j--) {
				if (oneRes[j] == i || abs(oneRes[j] - i) == abs(j - pos)) {
					can = false; break;
				}
			}
			if (can) {
				oneRes[pos] = i;
				help(ans, oneRes, pos + 1, size);
				oneRes[pos] = 0;
			}
		}
	}
};

int main() {
	Solution s;
	s.totalNQueens(4);
}