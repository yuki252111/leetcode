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
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode* l1 = head;
		ListNode* l2 = l1->next;
		ListNode* help = new ListNode(0);
		ListNode* tail = help;
		while (l1 && l2) {
			ListNode* t = l2->next;
			tail->next = l2; tail = tail->next;
			tail->next = l1; tail = tail->next;
			tail->next = NULL;
			l1 = t;
			if (l1 == NULL) {
				l2 = NULL;
				break;
			}
			l2 = l1->next;
		}
		if (l1) {
			tail->next = l1; tail = tail->next;
		}
		if (l2) {
			tail->next = l2; tail = tail->next;
		}
		return help->next;
	}
};

int main() {
	ListNode* l1 = new ListNode(1); ListNode* l2 = new ListNode(2);
	l1->next = l2;
	Solution s;
	s.swapPairs(l1);
}