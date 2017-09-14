//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//ll A[100005] = { 0 };
//int N, sum_4, sum_2;
//
//int main() {
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> A[i];
//		if (A[i] % 4 == 0) {
//			sum_4++;
//		}
//		else if (A[i] % 2 == 0) sum_2++;
//	}
//	if (sum_4 >= N / 2) {
//		cout << "Yes" << endl; 
//	}
//	else if (sum_2 + sum_4 * 2 >= N){
//		cout << "Yes" << endl;
//	}
//	else {
//		cout << "No" << endl;
//	}
//	
//}