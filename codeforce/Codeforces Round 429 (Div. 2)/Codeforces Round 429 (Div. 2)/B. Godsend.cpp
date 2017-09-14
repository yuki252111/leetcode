#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n = 0, odd_num = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		if (d % 2) odd_num++;
	}
	if (odd_num >= 1) {
		cout << "First" << endl;
	}
	else {
		cout << "Second" << endl;
	}
}