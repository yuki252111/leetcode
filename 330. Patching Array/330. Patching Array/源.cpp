#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	void help(vector<int>& has, int d, int n) {
		if (d > n) return;
		vector<int> cp = has;
		if (has[d] == 0) {
			has[d] = 1;
			count++;
		}
		for (int i = 1; i <= n; i++) {
			int t = i + d;
			if (cp[i] == 1 && t <= n && cp[t] == 0) {
				has[t] = 1;
				count++;
			}
		}
	}

	int minPatches(vector<int>& nums, int n) {
		vector<int> has(1ll * n + 1, 0);
		int res = 0;
		count = 0;
		while (count < n) {
			int add_num = 0;
			for (int i = 1; i <= n; i++) {
				if (has[i] == 0) {
					add_num = i; break;
				}
			}
			if (add_num != 0) {
				res++;
				help(has, add_num, n);
			}
		}
		return res;
	}
	int count;
};

int main() {
	vector<int> nums = { 1, 2, 31, 33 };
	Solution s;
	s.minPatches(nums, 
		2147483647);
}