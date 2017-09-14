#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
using namespace std;


int n, m, r, cnt;
map<pair<int, int>, int> values;
vector<vector<int>> nodes;
vector<int> rs;
vector<int> dis;

struct cmp {
	bool operator()(int a, int b) {
		return dis[a] > dis[b];
	}
};

priority_queue<int, vector<int>, cmp> pq;
int main() {
	cin >> n >> m >> r;
	nodes.resize(n + 1, vector<int>());
	rs.resize(n + 1, false);
	dis.resize(n + 1, INT32_MAX);
	bool start = false;
	for (int i = 0; i < r; i++) {
		int x;
		cin >> x;
		rs[x] = true;
		if (!start) {
			dis[x] = 0;

		}
	}
	for (int i = 0; i < m; i++) {
		int x, y, c;
		cin >> x >> y >> c;
		values[make_pair(x, y)] = c;
		values[make_pair(y, x)] = c;
		nodes[x].push_back(y);
		nodes[y].push_back(x);
	}
	cnt = rs.size();
	int ans = 0;
	
}