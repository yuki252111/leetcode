#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
		int m = nums1.size(), n = nums2.size();
		if (k == 0) return {};
		vector<vector<vector<int>>> dp1(m + 1, vector<vector<int>>(min(k, m) + 1, vector<int>()));
		get_vec(nums1, dp1, m, k);
		vector<vector<vector<int>>> dp2(n + 1, vector<vector<int>>(min(k, n) + 1, vector<int>()));
		get_vec(nums2, dp2, n, k);
		vector<int> ans(k, 0);
		for (int i = 0; i <= k && i <= m; i++) {
			int j = k - i;
			if (j >= 0 && j <= n) {
				vector<int> t1 = dp1[m][i];
				vector<int> t2 = dp2[n][j];
				vector<int> t;
				int size1 = t1.size(), size2 = t2.size();
				int p1 = 0, p2 = 0;
				while (p1 < size1 && p2 < size2)
				{
					if (t1[p1] < t2[p2]) t.push_back(t2[p2++]);
					else if (t1[p1] > t2[p2]) t.push_back(t1[p1++]);
					else {
						int tr = 0, idx1 = p1 + 1, idx2 = p2 + 1;
						while (idx1 < size1 && idx2 < size2) {
							if (t1[idx1] > t2[idx2]) {
								tr = 1; break;
							}
							else if (t1[idx1] < t2[idx2]) {
								tr = -1; break;
							}
							idx1++; idx2++;
						}
						if (tr == 0) {
							if (size1 - p1 >= size2 - p2) tr = 1;
							else tr = -1;
						}
						if (tr == 1) {
							t.insert(t.end(), t1.begin() + p1, t1.begin() + idx1);
							p1 = idx1;
						}
						else {
							t.insert(t.end(), t2.begin() + p2, t2.begin() + idx2);
							p2 = idx2;
						}
					}
				}
				while (p1 < size1) t.push_back(t1[p1++]);
				while (p2 < size2) t.push_back(t2[p2++]);
				if (max_vec(t, ans, k)) ans = t;
			}
		}
		return ans;
	}

	void get_vec(vector<int>& nums1, vector<vector<vector<int>>>& dp1, int m, int k) {
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= k && j <= m; j++) {
				if (i == j) {
					dp1[i][j] = dp1[i - 1][j - 1];
					dp1[i][j].push_back(nums1[i - 1]);
				}
				else if (i > j) {
					vector<int> t1 = dp1[i - 1][j - 1];
					t1.push_back(nums1[i - 1]);
					vector<int> t2 = dp1[i - 1][j];
					if (max_vec(t1, t2, j)) dp1[i][j] = t1;
					else dp1[i][j] = t2;
				}
			}
		}
	}

	bool max_vec(vector<int>& v1, vector<int> &v2, int n) {
		for (int i = 0; i < n; i++) {
			if (v1[i] > v2[i]) return true;
			else if (v1[i] < v2[i]) return false;
		}
		return true;
	}
};

int main() {
	vector<int> nums1 = { 6,3,9,0,5,6 };
	vector<int> nums2 = { 2,2,5,2,1,4,4,5,7,8,9,3,1,6,9,7,0 };
	Solution s;
	s.maxNumber(nums1, nums2, 23);
}