#include <iostream>
#include <algorithm>
#include <vector>
#define SIZE 305

using namespace std;
bool vi[SIZE];
int a[SIZE][SIZE];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> a[i][j];
	int ans = n;
	for (int i = 1; i <= m; i++) {
		int cnt[SIZE] = { 0 };
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= m; k++) {
				if (!vi[a[j][k]]) {
					cnt[a[j][k]]++;
					break;
				}
			}
		}
		int index = -1;
		int n_max = -1;
		for (int j = 1; j <= m; j++) {
			if (cnt[j] > n_max) {
				n_max = cnt[j];
				index = j;
			}
		}
		ans = min(ans, n_max);
		vi[index] = true;
	}
	
	cout << ans << endl;
}