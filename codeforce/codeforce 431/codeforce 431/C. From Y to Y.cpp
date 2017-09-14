#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

typedef long long ll;
int k;

int main() {
	cin >> k;
	string ans;
	int idx = 0;
	while (k) {
		int n = 0.5 + sqrt(0.25 + 2.0 * k);
		char ch = 'a' + idx;
		idx++;
		for (int i = 0; i < n; i++) ans += ch;
		k -= 1ll * n * (n - 1) / 2;
	}
	if (ans == "") ans = "a";
	cout << ans << endl;
}