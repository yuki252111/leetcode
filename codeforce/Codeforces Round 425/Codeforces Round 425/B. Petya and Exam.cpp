//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//string query[100005];
//bool ans[100005] = { false };
//int c[26] = { 0 };
//int n = 0;
//
//bool dfs(string pattern, string query) {
//	int index = -1;
//	int n = pattern.size();
//	for (int i = 0; i < n; i++) {
//		if (pattern[i] == '*') {
//			index = i; break;
//		} 
//		if (i >= query.size()) return false;
//		if (query[i] != pattern[i]) {
//			if (!(pattern[i] == '?' && c[query[i] - 'a'] > 0)) {
//				return false;
//			}
//		}
//	}
//	if (index == -1) return true;
//	int j1 = query.size() - 1;
//	int j2 = pattern.size() - 1;
//	while (j1 >= 0 && j2 >= 0 && (query[j1] == pattern[j2] ||
//		pattern[j2] == '?' )){
//		if (pattern[j2] == '?' && c[query[j1] - 'a'] == 0) return false;
//		j1--; j2--;
//	}
//	if (j2 != index) return false;
//	if (index >= j1) return true;
//	string temp = query.substr(index, j1 - index);
//	for (int i = 0; i < temp.size(); i++) {
//		if (c[temp[i] - 'a'] > 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	string goods;
//	cin >> goods;
//	for (int i = 0; i < goods.size(); i++) c[goods[i] - 'a']++;
//	string pattern;
//	cin >> pattern;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> query[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		ans[i] = dfs(pattern, query[i]);
//		if (ans[i] == true) {
//			cout << "YES" << endl;
//		}
//		else {
//			cout << "NO" << endl;
//		}
//	}
//}