/*#include <iostream>
using namespace std;

int main() {
	int orig_A, orig_B, orig_C;
	cin >> orig_A >> orig_B >> orig_C;
	int A = orig_A;
	int B = orig_B;
	int C = orig_C;
	int times = 0;
	while ((A % 2 == 0) && (B % 2 == 0) && (C % 2 == 0)) {
		times++;
		int temp_A = B / 2 + C / 2;
		int temp_B = A / 2 + C / 2;
		int temp_C = A / 2 + B / 2;
		A = temp_A;
		B = temp_B;
		C = temp_C;
		if (A == orig_A && B == orig_B && C == orig_C) {
			times = -1;
			break;
		}
	}
	cout << times << endl;
	system("pause");
}*/