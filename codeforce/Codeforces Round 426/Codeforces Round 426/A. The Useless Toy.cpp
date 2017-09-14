//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int get_pos(char ch) {
//	if (ch == 118) return 0;
//	if (ch == 60) return 1;
//	if (ch == 94) return 2;
//	if (ch == 62) return 3;
//}
//
//int main() {
//	char s_ch, e_ch;
//	int n;
//	cin >> s_ch >> e_ch >> n;
//	int s_i = get_pos(s_ch);
//	int e_i = get_pos(e_ch);
//	int cw = (s_i + n) % 4 == e_i;
//	int ccw = (s_i - e_i + 4) % 4 == n % 4;
//	if (cw && !ccw) {
//		cout << "cw" << endl;
//	}
//	else if (!cw && ccw) {
//		cout << "ccw" << endl;
//	}
//	else {
//		cout << "undefined" << endl;
//	}
//}