//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//int d[100005];
//unordered_map<int, int> m;
//int n;
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> d[i];
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		if (m[d[i]] == 0) {
//			ans++;
//		}
//		else {
//			ans--;
//		}
//		m[d[i]] = 1 - m[d[i]];
//	}
//	cout << ans << endl;
//}