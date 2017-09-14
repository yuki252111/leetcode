#include <iostream>
#include <algorithm>
#include <map>
#include <xfunctional>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, int, greater<int>> m;
	for (int i = 0; i < n; i++) {
		int tm; cin >> tm;
		m[tm]++;
	}
	long long ans = 0;
	map<int, int>::iterator iter = m.begin();
	int one = 0, two = 0;
	while (iter != m.end()) {
		if (iter->second >= 2) {
			one = iter->first;
			iter->second -= 2;
			break;
		}
		iter++;
	}
	while (iter != m.end()) {
		if (iter->second >= 2) {
			two = iter->first;
			iter->second -= 2;
			break;
		}
		iter++;
	}
	ans = max(ans, 1ll * one * two);
	cout << ans << endl;
}