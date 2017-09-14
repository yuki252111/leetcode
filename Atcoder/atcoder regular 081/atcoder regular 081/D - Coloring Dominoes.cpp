#include <iostream>
#include <algorithm>
using namespace std;

char s1[55], s2[55];
int n;
const int P = 1000000007;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> s1[i];
	for (int i = 1; i <= n; i++) cin >> s2[i];
	long long ans = 0;
	if (s1[1] == s2[1]) ans = 3;
	else ans = 6;
	for (int i = 2; i <= n; i++) {
		if (s1[i] == s1[i - 1]) continue;
		if (s1[i - 1] == s2[i - 1]) ans = 1ll * ans * 2 % P;
		else {
			if (s1[i] != s2[i]) ans = 1ll * ans * 3 % P;
		}
	}
	cout << ans << endl;
}