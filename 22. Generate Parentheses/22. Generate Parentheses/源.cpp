#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<string> generateParenthesis(int n) {
		if (n == 0) return { "" };
		if (n == 1) return { "()" };
		vector<string> ans;
		help(ans, "", n, n);
		return ans;
	}

	void help(vector<string>& ans, string cur, int left, int right) {
		if (left == 0 && right == 0) {
			ans.push_back(cur); return;
		}
		if (left < right) {
			if (left) help(ans, cur + "(", left - 1, right);
			if (right) help(ans, cur + ')', left, right - 1);
		}
		else if (left == right) {
			if (left) help(ans, cur + '(', left - 1, right);
		}
	}
};

int main() {
	Solution s;
	s.generateParenthesis(3);
}