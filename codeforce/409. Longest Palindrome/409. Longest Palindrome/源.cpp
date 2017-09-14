#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int longestPalindrome(string s) {
		int n = s.size();
		if (n == 0) return 0;
		string s_ = "$#";
		for (int i = 0; i < n; i++) {
			s_ += s[i];
			s_ += '#';
		}
		s_ += '!';
		vector<int> p(s_.size(), 0);
		int mx = 0, id = 0;
		for (int i = 1; i < s_.size() - 1; i++) {
			p[i] = mx > i ? min(p[2 * id - i], p[id] + id - i) : 1;
			while (s[i + p[i]] == s[i - p[i]]) p[i]++;
			if (i + p[i] > mx) {
				mx = i + p[i];
				id = i;
			}
		}
		int ans = 0;
		for (int i = 1; i < p.size() - 1; i++) {
			ans = max(ans, p[i] - 1);
		}
		return ans;
	}
};

int main() {
	Solution s;
	s.longestPalindrome("abccccdd");
}