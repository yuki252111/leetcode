#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	string removeDuplicateLetters(string s) {
		if (s.size() == 0) return "";
		int c[26] = { 0 };
		int vi[26] = { 0 };
		for (auto ch : s) c[ch - 'a']++;
		string ans = "0";
		for (int i = 0; i < s.size(); i++) {
			c[s[i] - 'a']--;
			if (vi[s[i] - 'a']) continue;
			while (ans.size() && s[i] < ans.back() && c[ans.back() - 'a']) {
				vi[ans.back() - 'a'] = 0;
				ans.pop_back();
			}
			ans += s[i];
			vi[s[i] - 'a'] = 1;
		}
		return ans.substr(1);
	}
};

int main() {
	Solution s;
	s.removeDuplicateLetters("cbacdcbc");
}