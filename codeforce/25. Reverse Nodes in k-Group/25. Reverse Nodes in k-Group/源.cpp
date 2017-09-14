#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
		if (head == NULL || head->next == NULL || k == 1) {
			return head;
		}
		ListNode* help = new ListNode(0);
		ListNode* tail = help;
		ListNode* cur = head, *next = NULL;
		while (cur) {
			ListNode* t = cur;
			int i = 0;
			while (i < k - 1) {
				if (cur == NULL) {
					break;
				}
				cur = cur->next;
				i++;
			}
			if (cur == NULL) {
				tail->next = reverse(t);
				break;
			}
			next = cur->next;
			cur->next = NULL;
			tail->next = reverse(t);
			tail = t;
			cur = next;
		}
		return help->next;
	}

	ListNode* reverse(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode* p1 = head, *p2 = p1->next, *p3 = p2->next;
		p1->next = NULL;
		while (p3) {
			p2->next = p1;
			p1 = p2; p2 = p3; p3 = p3->next;
		}
		p2->next = p1;
		return p2;
	}
};

int main() {
	ListNode* l1 = new ListNode(1); ListNode* l2 = new ListNode(2); ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4); ListNode* l5 = new ListNode(5);
	l1->next = l2; l2->next = l3; l3->next = l4; l4->next = l5;
	Solution s;
	s.reverseKGroup(l1, 3);
}