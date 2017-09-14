#include <vector>
#include <iostream>
using namespace std;

int C = 0;
int D = 0;

int main() {
	int N, A, B;
	cin >> N >> A >> B >> C >> D;
	vector<vector<pair<int, int>>> dp(N, vector<pair<int,int>>());
	dp[0].push_back(make_pair(A, A));
	for (int i = 0; i < N; i++) {
		vector<pair<int, int>> temp = dp[i - 1];
		for (int i = 0; i < temp.size(); i++) {
			pair<int, int> p = temp[i];
			dp[i].push_back(make_pair(p.first - C))
		}
	}
}