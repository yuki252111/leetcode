#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

typedef long ll;

ll a, b;

string fac(ll n) {
	string ans = "1";
	for (int i = 1; i <= n; i++) {

	}
}
int main() {
	cin >> a >> b;
	if (a < b) swap(a, b);
	cout << fac(b) << endl;
}