#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int P = 1000000007;
#define N 100005

int fac[N];
int inv[N];

int Pow(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) {
			res = 1ll * res * a % P;
		}
		b >>= 1;
		a = 1ll * a * a % P;
	}
	return res;
}

void init(int n) {
	fac[0] = 0;
	fac[1] = 1;
	for (int i = 2; i <= n; i++) {
		fac[i] = 1ll * i * fac[i - 1] % P;
	}
	inv[n] = Pow(fac[n], P - 2);
	for (int i = n - 1; i >= 1; i--) {
		inv[i] = 1ll * inv[i + 1] * (i + 1) % P;
	}
}

long long compose(int n, int m) {
	if (n < m) {
		return 0;
	}
	if (n == m) {
		return 1;
	}
	return 1ll * fac[n] * inv[m] % P * inv[n - m] % P;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n + 1, 0);
	for (int i = 0; i < n + 1; i++) {
		cin >> nums[i];
	}
	vector<vector<int>> index(n + 1, vector<int>());
	int left = 0, right = 0, num = 0;
	for (int i = 0; i < n + 1; i++) {
		index[nums[i]].push_back(i);
		if (index[nums[i]].size() == 2) {
			left = index[nums[i]][0];
			right = index[nums[i]][1];
			num = nums[i];
		}
	}
	init(n + 1);
	cout << n << endl;
	for (int i = 2; i <= n + 1; i++) {
		long long sum = compose(n + 1, i);
		sum -= compose(left, i - 1);
		sum -= compose(n - right, i - 1);
		cout << sum << endl;
	}
}

//#include<iostream>
//#define N 100005
//using namespace std;
//const int P = 1e9 + 7;
//int fac[N], inv[N], F[N];
//int n, L, R, x, i, m;
//int Pow(int a, int b) {
//	int ret = 1;
//	
//	for (; b; b >>= 1, a = 1ll * a * a % P)
//		if (b & 1) ret = 1ll * ret * a % P;
//	return ret;
//}
//int C(int n, int m) {
//	if (n<m) return 0;
//	return 1ll * fac[n] * inv[m] % P*inv[n - m] % P;
//}
//int main() {
//	cin >> n;
//	for (i = 1; i <= n + 1; i++) {
//		cin >> x;
//		if (F[x]) L = F[x], R = i;
//		F[x] = i;
//	}
//	for (fac[0] = i = 1; i <= n + 1; i++)
//		fac[i] = 1ll * fac[i - 1] * i%P;
//
//	for (inv[n + 1] = Pow(fac[n + 1], P - 2), i = n; i >= 0; i--)
//		inv[i] = 1ll * inv[i + 1] * (i + 1) % P;
//	m = n - R + L;
//	for (i = 1; i <= n + 1; i++)
//		printf("%d\n", (C(n + 1, i) - C(m, i - 1) + P) % P);
//}