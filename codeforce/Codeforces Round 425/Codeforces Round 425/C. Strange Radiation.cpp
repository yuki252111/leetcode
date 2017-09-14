//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Po {
//	int x;
//	int speed;
//	int di;
//};
//
//struct Do {
//	int x;
//	int speed;
//	Do(int x_, int speed_) : x(x_), speed(speed_) {}
//};
//Po peo[100005];
//vector<Do> ld;
//vector<Do> rd;
//vector<int> pos;
//int n = 0;
//int s = 0;
//
//bool cmp(const Do& a, const Do& b) {
//	return a.x < b.x;
//}
//
//int main() {
//	cin >> n >> s;
//	for (int i = 1; i <= n; i++) {
//		cin >> peo[i].x;
//		pos.push_back(peo[i].x);
//		cin >> peo[i].speed;
//		cin >> peo[i].di;
//		if (peo[i].di == 1) {
//			ld.push_back(Do(peo[i].x, peo[i].speed));
//		}
//		else {
//			rd.push_back(Do(peo[i].x, peo[i].speed));
//		}
//	}
//	sort(pos.begin(), pos.end());
//	sort(ld.begin(), ld.end(), cmp);
//	sort(rd.begin(), rd.end(), cmp);
//	double ans = INT32_MAX;
//	for (int i = 0; i < pos.size(); i++) {
//		if (i != 0 && pos[i] == pos[i - 1]) continue;
//		double left_time = INT32_MAX;
//		for (int j = 0; j < ld.size(); j++) {
//			double t = 0;
//			if (ld[j].x <= pos[i])
//				t = ld[j].x * 1.0 / (ld[j].speed + s);
//			else
//				t = ld[j].x * 1.0 / ld[j].speed;
//			left_time = min(left_time, t);
//		}
//		double right_time = INT32_MAX;
//		for (int j = 0; j < rd.size(); j++) {
//			double t = 0;
//			if (rd[j].x >= pos[i])
//				t = (1000000 - rd[j].x) * 1.0 / (rd[j].speed + s);
//			else
//				t = (1000000 - rd[j].x) * 1.0 / rd[j].speed;
//			right_time = min(right_time, t);
//		}
//		double time = max(left_time, right_time);
//		ans = min(ans, time);
//	}
//	cout << ans << endl;
//}