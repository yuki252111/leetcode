#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> p(n, 0);
	for (int i = 0; i < n; i++) cin >> p[i];
	sort(p.begin(), p.end());
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] / 2 <= k) {
			k = max(k, p[i]);
		}
		else {
			res++;
			k = p[i];
		}
	}
	cout << res << endl;
}