#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
		int n = people.size();
		if (n == 0) return people;
		sort(people.begin(), people.end(), cmp);
		for (int i = 1; i < n; i++) {
			int j = i - people[i].second;
			if (j > 0) {
				int index = people[i].second;
				pair<int, int> temp = people[i];
				for (int j = i - 1; j >= index; j--) people[j + 1] = people[j];
				people[index] = temp;
			}
		}
		return people;
	}
	static bool cmp(const pair<int, int>& p1, const pair<int, int>& p2) {
		if (p1.first > p2.first) return true;
		if (p1.first == p2.first && p1.second < p2.second) return true;
		return false;
	}
};

int main() {
	vector<pair<int, int>> people = { {7, 0},{4, 4},{7, 1},{5, 0},{6, 1},{5, 2} };
	Solution s;
	s.reconstructQueue(people);
}