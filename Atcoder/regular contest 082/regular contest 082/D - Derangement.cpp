//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n;
//int d[100005];
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> d[i];
//	vector<int> idx;
//	for (int i = 1; i <= n; i++) {
//		if (d[i] == i) idx.push_back(i);
//	}
//	int ans = 0;
//	int i = 0, start = 0;
//	while (i < idx.size()) {
//		int cnt = 0;
//		while (i < idx.size() && (i == start || idx[i] - idx[i - 1] == 1)) {
//			i++; cnt++;
//		}
//		ans += (cnt + 1) / 2;
//		start = i;
//	}
//	cout << ans << endl;
//}