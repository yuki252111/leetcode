#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> findSubstring(string s, vector<string>& words) {
		int wc = words.size();
		if (wc == 0) return {};
		map<string, int> wm;
		for (int i = 0; i < wc; i++) {
			wm[words[i]]++;
		}
		int wl = words[0].size();
		vector<int> ans;
		for (int i = 0; i <= (int)(s.size() - wc * wl); i++) {
			map<string, int> cm;
			int j = 0;
			while (j < wc) {
				string t = s.substr(i + j * wl, wl);
				if (wm.find(t) == wm.end()) {
					break;
				}
				cm[t]++;
				if (cm[t] > wm[t]) break;
				j++;
			}
			if (j == wc) {
				ans.push_back(i);
			}
		}
		return ans;
	}
};

int main() {
	vector<string> words = { 
		"word","good","best","good" };
	Solution s;
	s.findSubstring("wordgoodgoodgoodbestword", words);
}