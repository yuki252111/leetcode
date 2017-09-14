#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		int n = candidates.size();
		sort(candidates.begin(), candidates.end());
		vector<int> oneResult;
		set<vector<int>> ans;
		help(ans, oneResult, candidates, 0, n, target);
		return vector<vector<int>>(ans.begin(), ans.end());
	}

	void help(set<vector<int>>& ans, vector<int>& oneResult, vector<int>& candidates, int pos, int size, int sum) {
		if (sum == 0) {
			ans.insert(oneResult);
			return;
		}
		if (pos >= size) return;
		help(ans, oneResult, candidates, pos + 1, size, sum);
		if (sum >= candidates[pos]) {
			oneResult.push_back(candidates[pos]);
			help(ans, oneResult, candidates, pos + 1, size, sum - candidates[pos]);
			oneResult.pop_back();
		}
	}
};

int main() {
	vector<int> nums = { 10, 1, 2, 7, 6, 1, 5 };
	Solution s;
	vector<vector<int>> res = s.combinationSum(nums, 8);
}