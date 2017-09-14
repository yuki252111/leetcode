#include <iostream>
using namespace std;


 struct ListNode {
     int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		if (head == NULL || head->next == NULL) {
			return head;
		}
		ListNode* odd = new ListNode(0);
		ListNode* cur1 = odd;
		ListNode* even = new ListNode(0);
		ListNode* cur2 = even;
		ListNode* cur = head;
		while (cur) {
			if (cur->val % 2 == 1) {
				cur1->next = cur;
				cur = cur->next;
				cur1 = cur1->next;
				cur1->next = NULL;
			}
			else {
				cur2->next = cur;
				cur2 = cur2->next;
				cur = cur->next;
				cur2->next = NULL;
			}
		}
		cur1->next = even->next;
		even->next = NULL;
		return odd->next;
	}
};

int main() {
	ListNode* l1 = new ListNode(1); ListNode* l2 = new ListNode(2); ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4); ListNode* l5 = new ListNode(5); ListNode* l6 = new ListNode(6);
	ListNode* l7 = new ListNode(7); ListNode* l8 = new ListNode(8);
	l1->next = l2; l2->next = l3; l3->next = l4; l4->next = l5;
	l5->next = l6; l6->next = l7; l7->next = l8;
	Solution s;
	s.oddEvenList(l1);
}