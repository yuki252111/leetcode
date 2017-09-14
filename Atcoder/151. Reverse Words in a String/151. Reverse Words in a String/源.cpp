#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	void reverseWords(string &s) {
		int size = s.size();
		if (size == 0) {
			return;
		}
		reverse(s, 0, size - 1);
		int i = 0;
		while (i < size && s[i] == ' ') {
			i += 1;
		}
		int start = i;
		string res = "";
		for (; i < size; i++) {
			if (s[i] == ' ') {
				reverse(s, start, i - 1);
				res += ' ';
				res += s.substr(start, i - start);
				while (i < size && s[i] == ' ') {
					i += 1;
				}
				start = i;
			}
		}
		if (start < size) {
			reverse(s, start, size - 1);
			res += ' ';
			res += s.substr(start, size - start);
		}
		s = res.substr(1, res.size() - 1);
	}

	void reverse(string& s, int start, int end) {
		while (start <= end) {
			char temp = s[start];
			s[start] = s[end];
			s[end] = temp;
			start += 1;
			end -= 1;
		}
	}
};

int main() {
	Solution s;
	string str = " ";
	s.reverseWords(str);
}