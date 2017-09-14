#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

 class Solution {
 public:
	 vector<vector<int>> levelOrderBottom(TreeNode* root) {
		 if (root == NULL) return {};
		 TreeNode* last = root;
		 vector<vector<int>> ans;
		 vector<int> oneResult;
		 queue<TreeNode*> q;
		 q.push(root);
		 while (q.size()) {
			 TreeNode* cur = q.front(); q.pop();
			 oneResult.push_back(cur->val);
			 if (cur->left) q.push(cur->left);
			 if (cur->right) q.push(cur->right);
			 if (cur == last) {
				 ans.insert(ans.begin(), oneResult);
				 oneResult.clear();
				 if (q.size()) last = q.back();
			 }
		 }
		 return ans;
	 }
 };

 int main() {
	 TreeNode* t1 = new TreeNode(3); TreeNode* t2 = new TreeNode(9); TreeNode* t3 = new TreeNode(20);
	 TreeNode* t4 = new TreeNode(15); TreeNode* t5 = new TreeNode(7); 
	 t1->left = t2; t1->right = t3; t3->left = t4; t3->right = t5;
	 Solution s;
	 s.levelOrderBottom(t1);
 }

