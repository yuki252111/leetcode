//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//int n, k;
//int c[26] = { 0 };
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		char t; cin >> t;
//		c[t - 'a']++;
//	}
//	bool can = true;
//	for (int i = 0; i < 26; i++) {
//		if (c[i] > k) {
//			can = false; break;
//		}
//	}
//	if (can) cout << "YES" << endl;
//	else cout << "NO" << endl;
//}