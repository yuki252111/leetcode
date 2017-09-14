#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		int size = lists.size();
		if (size == 0) return NULL;
		if (size == 1) return lists[0];
		vector<ListNode*> one, two;
		for (int i = 0; i < size / 2; i++) {
			one.push_back(lists[i]);
		}
		for (int i = size / 2; i < size; i++) {
			two.push_back(lists[i]);
		}
		return mergeTwo(mergeKLists(one), mergeKLists(two));
	}

	ListNode* mergeTwo(ListNode* l1, ListNode* l2) {
		if (l1 == NULL) return l2;
		if (l2 == NULL) return l1;
		ListNode* help = new ListNode(0);
		ListNode* tail = help;
		while (l1 && l2) {
			if (l1->val < l2->val) {
				tail->next = l1;
				l1 = l1->next;
				tail = tail->next;
			}
			else {
				tail->next = l2;
				l2 = l2->next;
				tail = tail->next;
			}
		}
		if (l1) tail->next = l1;
		if (l2) tail->next = l2;
		return help->next;
	}
};