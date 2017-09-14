#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		if (head == NULL) return NULL;
		ListNode* cur = head;
		int k = 0;
		unordered_map<int, ListNode*> m;
		while (cur) {
			m[k++] = cur;
			cur = cur->next;
		}
		int left = k - n;
		if (left < 0) return head;
		if (left == 0) return head->next;
		if (left == k - 1) {
			m[k - 2]->next = NULL;
			return head;
		}
		m[left - 1]->next = m[left + 1];
		return head;
	}
};

int main() {
	ListNode* l1 = new ListNode(1); ListNode* l2 = new ListNode(2); ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4); ListNode* l5 = new ListNode(5);
	l1->next = l2; l2->next = l3; l3->next = l4; l4->next = l5;
	Solution s;
	ListNode* res = s.removeNthFromEnd(l1, 2);
}