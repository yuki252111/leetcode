#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
	for (int i = 1; i <= n; i++) dp[i][i] = true;
	ll ans = 0;
	for (int k = 1; k < n; k++) {
		for (int i = 1; i + k <= n; i++) {
			/*if (k == 1) dp[i][i + k] = s[i - 1] == s[i + k - 1];
			else dp[i][i + k] = s[i - 1] == s[i + k - 1] && dp[i + 1][i + k - 1];
			if (!dp[i][i + k]) ans++;*/
		}
	}
	
}