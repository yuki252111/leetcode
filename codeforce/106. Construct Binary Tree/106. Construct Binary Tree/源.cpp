#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		int n1 = postorder.size(), n2 = inorder.size();
		if (n1 == 0 || n1 != n2) return NULL;
		return help(postorder, 0, n1 - 1, inorder, 0, n2 - 1);
	}

	TreeNode* help(vector<int>& po, int pl, int pr, vector<int>& io, int il, int ir) {
		if (pl > pr || il > ir) return NULL;
		int i = il;
		for (; i <= ir; i++) if (io[i] == po[pr]) break;
		TreeNode* root = new TreeNode(po[pr]);
		root->left = help(po, pl, pl + i - il - 1, io, il, i - 1);
		root->right = help(po, pl + i - il, pr - 1, io, i + 1, ir);
		return root;
	}
};

int main() {
	vector<int> p = { -1 }, i = { -1 };
	Solution s;
	s.buildTree(p, i);
}