#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int c[100005] = { 0 };
int sf[100005][3];
int n, q;
int main() {
	cin >> n >> q;
	for (int i = 2; i <= n; i++) {
		int num;
		cin >> num;
		c[i]++;
		c[num]++;
	}
	for (int i = 1; i <= q; i++) {
		cin >> sf[i][0] >> sf[i][1] >> sf[i][2];
	}
	for (int i = 1; i <= q; i++) {

	}
 }