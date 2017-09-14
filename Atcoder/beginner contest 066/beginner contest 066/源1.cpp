//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n = 0;
//	cin >> n;
//	vector<int> ans(n, 0);
//	for (int i = 0; i < n; i++) {
//		cin >> ans[i];
//	}
//	vector<int> res(n, 0);
//	int index = 0;
//	for (int i = n - 1; i >= 0; i-= 2) {
//		res[index] = ans[i];
//		if (i - 1 >= 0) {
//			res[n - 1 - index] = ans[i - 1];
//		}
//		index += 1;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << res[i] << " ";
//	}
//}