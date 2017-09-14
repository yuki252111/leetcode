//#include <string>
//#include <iostream>
//using namespace std;
//
//bool isEven(string temp) {
//	int size = temp.size();
//	for (int i = 0; i < size / 2; i++) {
//		if (temp[i] != temp[size / 2 + i]) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	string s;
//	cin >> s;
//	int size = s.size();
//	for (int i = size - 2; i > 0; i-= 2) {
//		string temp = s.substr(0, i);
//		if (isEven(temp)) {
//			cout << temp.length() << endl;
//			break;
//		}
//	}
//}