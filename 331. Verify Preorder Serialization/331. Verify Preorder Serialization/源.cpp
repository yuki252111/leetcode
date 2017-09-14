#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	bool isValidSerialization(string preorder) {
		if (preorder == "") return false;
		vector<string> vs;
		string ts;
		for (int i = 0; i < preorder.size(); i++) {
			if (preorder[i] == ',') {
				vs.push_back(ts);
				ts = "";
			}
			else {
				ts += preorder[i];
			}
		}
		vs.push_back(ts);
		int pos = 0;
		bool ans = valid(vs, pos, vs.size());
		return pos == vs.size() && ans;
	}

	bool valid(vector<string>& vs, int& pos, int size) {
		if (pos >= size) return false;
		if (vs[pos] == "#") {
			pos++;
			return true;
		}
		pos++;
		if (!valid(vs, pos, size)) return false;
		if (!valid(vs, pos, size)) return false;
		return true;
	}
};

int main() {
	Solution s;
	bool res = s.isValidSerialization("9,#,#,1");
}