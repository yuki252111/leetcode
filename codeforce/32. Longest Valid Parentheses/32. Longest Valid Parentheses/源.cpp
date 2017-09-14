#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	int longestValidParentheses(string s) {
		int n = s.size();
		if (n <= 1) return 0;
		int ans = 0;
		stack<int> idx;
		for (int i = 0; i < n; i++) {
			if (idx.empty() || s[i] == '(') idx.push(i);
			else {
				if (idx.size() && s[idx.top()] == '(') {
					idx.pop();
					if (idx.empty()) ans = max(ans, i + 1);
					else ans = max(ans, i - idx.top());
				}
				else {
					idx.push(i);
				}
			}
		}
		return ans;
	}
};

int main() {
	Solution s;
	s.longestValidParentheses(")()())");
}