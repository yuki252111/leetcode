//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int n;
//int d[100005];
//unordered_map<int, int> m;
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> d[i];
//	for (int i = 1; i <= n; i++) {
//		m[d[i]]++;
//		m[d[i] - 1]++;
//		m[d[i] + 1]++;
//	}
//	auto iter = m.begin();
//	int ans = 0;
//	while (iter != m.end()) {
//		ans = max(ans, iter->second);
//		iter++;
//	}
//	cout << ans << endl;
//}