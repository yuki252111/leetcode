#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll d[5005] = { 0 };
ll sums[5005] = { 0 };
int n;

ll sum_range(int l, int r) {
	if (l == r) return 0;
	if (l == 0) return sums[r - 1];
	return sums[r - 1] - sums[l - 1];
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d[i];
		if (i == 0) sums[i] = d[i];
		else sums[i] = d[i] + sums[i - 1];
	}
	ll ans = INT64_MIN;
	int x, y, z;
	for (int i = 0; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = j; k <= n; k++) {
				ll t = sum_range(0, i) - sum_range(i, j) + sum_range(j, k) - sum_range(k, n);
				if (t > ans) {
					ans = t;
					x = i; y = j; z = k;
				}
			}
		}
	}
	cout << x << " " << y << " " << z << endl;
}