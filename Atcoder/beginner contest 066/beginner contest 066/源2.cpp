#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fac[100001];
int mod = 1000000007;

void init_fac() {
	fac[0] = 1;
	fac[1] = 1;
	for (int i = 2; i <= 100000; i++) {
		fac[i] = fac[i - 1] * i % mod;
	}
}

int main() {
	int n = 0;
	cin >> n;
	vector<int> nums(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	init_fac();
	int left = 0;
	int right = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (nums[i] = nums[j]) {
				left = i;
				right = j;
			}
		}
	}
	vector<int> res(n, 0);
	int left_sum = left;
	int right_sum = n - 1 - right;
	for (int i = 0; i < n; i++) {
		res[i] = fac[n] / fac[n - (i + 1)];
		res[i] = res[i] / fac[i + 1];
		int temp = 0;
		if (left_sum >= i) {
			temp += fac[];
		}
		if (right_sum >= i) {
			temp += fac[]
		}

	}
}