#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int a[105];

bool fill(int idx, int left_two, int left_four) {
	if (left_two < 0 || left_four < 0) return false;
	if (idx > k) return true;
	int t = a[idx];
	int num = t / 4;
	left_four -= num;
	if (left_four < 0) {
		left_two -= (0 - left_four) * 2;
		if (left_two >= 0) left_four = 0;
	}
	if (left_two < 0 || left_four < 0) return false;
	int left = t - num * 4;
	if (left == 3) {
		if (fill(idx + 1, left_two, left_four - 1)) return true;
		if (fill(idx + 1, left_two - 2, left_four)) return true;
	}
	else if (left == 2) {
		if (fill(idx + 1, left_two, left_four - 1)) return true;
		if (fill(idx + 1, left_two - 1, left_four)) return true;
	}
	else if (left == 1) {
		if (fill(idx + 1, left_two + 1, left_four - 1)) return true;
		if (fill(idx + 1, left_two - 1, left_four)) return true;
	}
	else {
		return true;
	}
	return false;
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= k; i++) cin >> a[i];
	int left_two = 2 * n, left_four = n;
	if (fill(1, left_two, left_four)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}