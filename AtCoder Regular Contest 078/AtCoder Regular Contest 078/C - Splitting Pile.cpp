//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n = 0;
//	cin >> n;
//	vector<long long> nums(n, 0);
//	for (int i = 0; i < n; i++) cin >> nums[i];
//	vector<long long> sums(n, 0);
//	sums[0] = nums[0];
//	for (int i = 1; i < n; i++) sums[i] = sums[i - 1] + nums[i];
//	long long  res = INT32_MAX;
//	for (int i = 0; i < n - 1; i++) res = min(res, abs(sums[i] - (sums[n - 1] - sums[i])));
//	cout << res << endl;
//}