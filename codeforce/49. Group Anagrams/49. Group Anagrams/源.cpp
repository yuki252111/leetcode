#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		int n = strs.size();
		if (n == 0) return {};
		map<vector<int>, vector<string>> m;
		for (int i = 0; i < n; i++) {
			string t = strs[i];
			vector<int> dp(26, 0);
			for (int j = 0; j < t.size(); j++) {
				dp[t[j] - 'a']++;
			}
			m[dp].push_back(t);
		}
		vector<vector<string>> ans;
		map<vector<int>, vector<string>>::iterator iter = m.begin();
		while (iter != m.end()) {
			ans.push_back(iter->second);
			iter++;
		}
		return ans;
	}
};

int main() {
	vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
	Solution s;
	s.groupAnagrams(strs);
}