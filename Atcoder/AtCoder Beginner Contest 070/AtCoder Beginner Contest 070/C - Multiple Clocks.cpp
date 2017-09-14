//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//typedef long long ll;
//
//ll gcd(ll a, ll b) {
//	if (a < b) swap(a, b);
//	while (b) {
//		ll t = b;
//		b = a % b;
//		a = t;
//	}
//	return a;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	set<ll> ts;
//	for (int i = 0; i < N; i++) {
//		ll tm;
//		cin >> tm;
//		ts.insert(tm);
//	}
//	vector<ll> tv(ts.begin(), ts.end());
//	int n = tv.size();
//	if (tv.size() == 1) {
//		cout << tv[0] << endl;
//	}
//	else {
//		ll N_gcd =  tv[0] / gcd(tv[0], tv[1]) * tv[1];
//		for (int i = 2; i < tv.size(); i++) {
//			N_gcd = tv[i] / gcd(N_gcd, tv[i]) * N_gcd;
//		}
//		cout << N_gcd << endl;
//	}
//}