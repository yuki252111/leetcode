#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
int d[100005];
ll sums[100005];
int n;

int main() {
	cin >> n;
	sums[0] = 0; d[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> d[i];
		sums[i] = sums[i - 1] + d[i];
	}
	ll ans = 0, rest = 0, sign = 0;
	if (sums[1] > 0) sign = 1;
	else if (sums[1] < 0) sign = -1;
	else {
		sign = 1;
		ans = 1;
		rest = 1;
	}

	for (int i = 2; i <= n; i++) {
		sign = -sign;
		sums[i] += rest;
		if (sign > 0) {
			if (sums[i] <= 0) {
				rest += 1 - sums[i];
				ans += abs(1 - sums[i]);
				sums[i] = 1;
			}
		}
		else {
			if (sums[i] >= 0) {
				rest += -1 - sums[i];
				ans += abs(-1 - sums[i]);
				sums[i] = -1;
			}
		}
	}
	cout << ans << endl;
}