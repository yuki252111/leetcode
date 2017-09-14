#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> cakes(n, 0);
	for (int i = 0; i < n; i++) cin >> cakes[i];
	int ans = 0;
	int i = 0;
	while (k) {
		set<int> temp;
		while (i < n) {
			if (temp.find(cakes[i]) == temp.end()) temp.insert(cakes[i]);
			else {
				if (k == 1) {
					while (i < n) {
						temp.insert(cakes[i]); i++;
					}
				}
				ans += temp.size();
				k--;
				break;
			}
			i++;
		}
	}
	cout << ans << endl;
}