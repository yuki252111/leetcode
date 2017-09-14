//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n;
//
//bool cmp(pair<int, int>& a, pair<int, int>& b) {
//	return a.first < b.first || (a.first == b.first && a.second < b.second);
//}
//
//int main() {
//	cin >> n;
//	vector<pair<int, int>> pl(n, make_pair(0, 0));
//	for (int i = 0; i < n; i++) {
//		cin >> pl[i].first >> pl[i].second;
//	}
//	sort(pl.begin(), pl.end(), cmp);
//	int ans = 0;
//	int x = pl[0].first, y = pl[0].second;
//	for (int i = 1; i < n; i++) {
//		if (pl[i].first > y) {
//			ans += y - x + 1;
//			x = pl[i].first;
//			y = pl[i].second;
//		}
//		else {
//			y = max(y, pl[i].second);
//		}
//	}
//	ans += y - x + 1;
//	cout << ans << endl;
//}