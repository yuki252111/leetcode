#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	string convertToTitle(int n) {
		string temp = "";
		int mo = 26;
		while (n) {
			int n1 = (n - 1) % mo;
			char ch = n1 + 65;
			temp += ch;
			n /= mo;
		}
		string res = "";
		for (int i = temp.size() - 1; i >= 0; i--) {
			res += temp[i];
		}
		return res;
	}
};

int main() {
	Solution s;
	s.convertToTitle(26);
}