//#include <iostream>
//#include <string> 
//#include <vector>
//using namespace std;
//
//int main() {
//	int n = 0;
//	string s;
//	cin >> n >> s;
//	int count = 0;
//	vector<int> nums;
//	int i = 0;
//	while (i < n) {
//		while (i < n && s[i] == '1') {
//			count++; i++;
//		}
//		nums.push_back(count);
//		count = 0;
//		while (i < n && s[i] == '0') {
//			i++; count++;
//		}
//		if (count > 1) {
//			int j = count - 1;
//			while (j > 0) {
//				nums.push_back(0);
//				j--;
//			}
//		}
//		count = 0;
//	}
//	long long res = 0;
//	for (int i = 0; i < nums.size(); i++) {
//		res = res * 10 + nums[i];
//	}
//	cout << res << endl;
//}