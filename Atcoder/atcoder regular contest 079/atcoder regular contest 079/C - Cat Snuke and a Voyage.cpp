//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <queue>
//using namespace std;
//
//vector<int> boat[200005];
//bool node[200005] = { false };
//int N, M;
//
//bool bfs(int cur, int target) {
//	int level = 0;
//	queue<int> q;
//	q.push(cur);
//	node[cur] = true;
//	int last = cur;
//	while (!q.empty()) {
//		int c = q.front();
//		q.pop();
//		if (c == target) return true;
//		for (int i = 0; i < boat[c].size(); i++) {
//			if (node[boat[c][i]] == false) {
//				q.push(boat[c][i]);
//				node[boat[c][i]] = true;
//			}
//		}
//		if (c == last) {
//			level++;
//			if (level >= 3) {
//				return false;
//			}
//			if (!q.empty()) last = q.back();
//		}
//	}
//	return false;
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 1; i <= M; i++) {
//		int one, two;
//		cin >> one >> two;
//		boat[one].push_back(two);
//		boat[two].push_back(one);
//	}
//	if (bfs(1, N)) cout << "POSSIBLE" << endl;
//	else cout << "IMPOSSIBLE" << endl;
//}
