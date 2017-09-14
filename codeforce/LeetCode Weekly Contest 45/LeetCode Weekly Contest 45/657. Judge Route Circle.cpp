//#include <vector>
//#include <string>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	bool judgeCircle(string moves) {
//		int x = 0, y = 0;
//		for (char ch : moves) {
//			if (ch == 'U') y += 1;
//			else if (ch == 'D') y -= 1;
//			else if (ch == 'L') x -= 1;
//			else x += 1;
//			if (x == 0 && y == 0) return true;
//		}
//		return false;
//	}
//};