//#include <iostream>
//#include <unordered_map>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//unordered_map<int, int> m;
//int n;
//
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int t;
//		cin >> t;
//		m[t]++;
//	}
//	unordered_map<int, int>::iterator iter = m.begin();
//	vector<int> num;
//	while (iter != m.end()) {
//		if (iter->second >= 2) {
//			num.push_back(iter->first);
//			if (iter->second >= 4) num.push_back(iter->first);
//		}
//		iter++;
//	}
//	sort(num.begin(), num.end());
//	ll ans = 0;
//	if (num.size() >= 2) {
//		ll w = num[num.size() - 1]; ll h = num[num.size() - 2];
//		ans = 1ll * w * h;
//	}
//	cout << ans << endl;
//}