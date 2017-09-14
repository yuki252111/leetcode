//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int A[10][10] = { 0 };
//
//bool is_win(int i, int j) {
//	A[i][j] = 1;
//	int count = 0;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			count = 0;
//			for (int k = 0; k < 5; k++) {
//				if (i - k >= 0 && A[i - k][j] == 1) count++;
//			}
//			if (count == 5) {
//				A[i][j] = 0; return true;
//			}
//			count = 0;
//			for (int k = 0; k < 5; k++) {
//				if (j - k >= 0 && A[i][j - k] == 1) count++;
//			}
//			if (count == 5) {
//				A[i][j] = 0; return true;
//			}
//			count = 0;
//			for (int k = 0; k < 5; k++) {
//				if (i - k >= 0 && j - k >= 0 && A[i - k][j - k] == 1) count++;
//			}
//			if (count == 5) {
//				A[i][j] = 0; return true;
//			}
//		}
//	}
//	A[i][j] = 0;
//	return false;
//}
//
//int main() {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			char ch;
//			cin >> ch;
//			if (ch == 'X') {
//				A[i][j] = 1;
//			}
//			else if (ch == 'O') {
//				A[i][j] = 2;
//			}
//			else {
//				A[i][j] = 0;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (A[i][j] == 0) {
//				if (is_win(i, j)) {
//					cout << "YES" << endl;
//					return 0;
//				}
//			}
//		}
//	}
//	cout << "NO" << endl;
//}