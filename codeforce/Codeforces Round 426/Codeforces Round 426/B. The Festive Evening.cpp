//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int c[26] = { 0 };
//int g[26] = { 0 };
//int n, k;
//string s;
//
//int main() {
//	cin >> n >> k >> s;
//	for (int i = 0; i < n; i++) c[s[i] - 'A']++;
//	int g_n = 0;
//	int i = 0;
//	while (i < n) {
//		if (i == 0 || s[i] != s[i - 1]) {
//			if (g[s[i] - 'A'] == 0 && c[s[i] - 'A']) {
//				g_n++;
//				g[s[i] - 'A'] = 1;
//			}
//			if (i > 0 && c[s[i - 1] - 'A'] == 0 && g[s[i] - 'A']) {
//				g_n--;
//				g[s[i] - 'A'] = 0;
//			}
//			if (g_n > k) {
//				std::cout << "YES" << endl;
//				return 0;
//			}
//		}
//		c[s[i] - 'A']--;
//		i++;
//	}
//	std::cout << "NO" << endl;
//}