//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//		int n = arr.size();
//		int i = 0;
//		for (; i < n; i++) {
//			if (arr[i] >= x) break;
//		}
//		int l = i - 1, r = i;
//		vector<int> ans;
//		while (l >= 0 && r < n && ans.size() < k) {
//			if (arr[r] - x < x - arr[l]) {
//				ans.push_back(arr[r]);
//				r++;
//			}
//			else {
//				ans.push_back(arr[l]); l--;
//			}
//		}
//		while (l >= 0 && ans.size() < k) {
//			ans.push_back(arr[l]); l--;
//		}
//		while (r < n && ans.size() < k) {
//			ans.push_back(arr[r]); r++;
//		}
//		sort(ans.begin(), ans.end());
//		return ans;
//	}
//};
//
//int main() {
//	vector<int> nums = { 1, 2, 3, 4, 5 };
//	Solution s;
//	s.findClosestElements(nums, 4, -1);
//}