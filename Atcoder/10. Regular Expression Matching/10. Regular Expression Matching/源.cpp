#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*class Solution {
public:
	bool isMatch(string s, string p) {
		int size1 = s.size();
		int size2 = p.size();
		vector<vector<bool>> dp(size1 + 1, vector<bool>(size2 + 1, false));
		dp[0][0] = true;
		for (int i = 1; i <= size1; i++) {
			for (int j = 1; j <= size2; j++) {
				if (p[i - 1] != '*') {
					if (p[i - 1] == '.' || p[i - 1] == s[i - 1]) {
						dp[i][j] = dp[i - 1][j - 1];
					}
				}
				else {
					if (j > 1) {
						if (dp[i][j - 2] || dp[i][j - 1] || ((s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j - 1])) {
							dp[i][j] = true;
						}
					}
				}
			}
		}
		return dp[size1][size2];
	}
};*/

class Solution {
public:
	bool isMatch(string s, string p) {
		int m = s.size();
		int n = p.size();
		vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
		dp[0][0] = true;

		for (int i = 0; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (p[j - 1] != '.' && p[j - 1] != '*') {
					if (i > 0 && s[i - 1] == p[j - 1] && dp[i - 1][j - 1])
						dp[i][j] = true;
				}
				else if (p[j - 1] == '.') {
					if (i > 0 && dp[i - 1][j - 1])
						dp[i][j] = true;
				}
				else if (j > 1) {
					if (dp[i][j - 1] || dp[i][j - 2])
						dp[i][j] = true;
					else if (i > 0 && (p[j - 2] == s[i - 1] || p[j - 2] == '.') && dp[i - 1][j])
						dp[i][j] = true;
				}
			}
		}
		return dp[m][n];
	};
};

int main() {
	Solution s;
	s.isMatch("ab", ".*c");
}