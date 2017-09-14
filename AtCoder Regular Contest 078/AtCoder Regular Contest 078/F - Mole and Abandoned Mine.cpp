#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int count_ = 0;
int count1 = 0;
int count2 = 0;

void dfs(int start, int end, vector<vector<int>>& e, vector<int>& visited, int& count) {
	visited[start] = 1;
	count++;
	if (start == end) {
		return;
	}
	vector<int> v = e[start];
	for (int i = 0; i < v.size(); i++) {
		if (visited[v[i]] == 0) {
			dfs(v[i], end, e, visited, count);
		}
	}
}

void bfs(int start, int end, vector<vector<int>>& edges, vector<int>& visited, int& count) {
	queue<int> q;
	int last = start;
	q.push(start);
	visited[start] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (cur == last) count++;
		if (cur == end) break;
		for (int i = 0; i < edges[cur].size(); i++) {
			if (visited[edges[cur][i]] == 0) {
				visited[edges[cur][i]] = 1;
				q.push(edges[cur][i]);
			}
		}
		if (!q.empty() && cur == last) last = q.back();
	}
}

int main() {
	int n = 0;
	cin >> n;
	vector<vector<int>> edges(n + 1, vector<int>());
	for (int i = 1; i < n; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	vector<int> visited(n + 1, 0);
	dfs(1, n, edges, visited, count1);
	vector<int> visited1(n + 1, 0);
	dfs(n, 1, edges, visited1, count2);
	vector<int> visited2(n + 1, 0);
	bfs(n, 1, edges, visited2, count_);
	if (count1 > count2) {
		cout << "Fennec" << endl;
	}
	else if (count1 < count2) {
		cout << "Snuke" << endl;
	}
	else {
		if (count_ % 2 == 1) {
			cout << "Fennec" << endl;
		}
		else {
			cout << "Snuke" << endl;
		}
	}
}