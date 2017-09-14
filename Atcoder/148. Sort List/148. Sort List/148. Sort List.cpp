// 148. Sort List.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
	ListNode* sortList(ListNode* head) {
		if (head == NULL) {
			return NULL;
		}
		int size = 0;
		ListNode* cur = head;
		while (cur) {
			size += 1;
			cur = cur->next;
		}
		if (size == 1) {
			return head;
		}
		int top = size / 2;
		int i = 1;
		ListNode* left = head;
		cur = head;
		while (i < top) {
			cur = cur->next;
			i += 1;
		}
		ListNode* right = cur->next;
		cur->next = NULL;
		ListNode* res1 = sortList(left);
		ListNode* res2 = sortList(right);
		if (res1 == NULL) {
			return res2;
		}
		if (res2 == NULL) {
			return res1;
		}
		ListNode* res = new ListNode(0);
		cur = res;
		ListNode* cur1 = res1;
		ListNode* cur2 = res2;
		while (cur1 && cur2) {
			if (cur1->val <= cur2->val) {
				cur->next = cur1;
				cur1 = cur1->next;
			}
			else {
				cur->next = cur2;
				cur2 = cur2->next;
			}
			cur = cur->next;
		}
		while (cur1) {
			cur->next = cur1;
			cur1 = cur1->next;
		}
		while (cur2) {
			cur->next = cur2;
			cur2 = cur2->next;
		}
		return res->next;
	}
};

int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4);
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	Solution s;
	s.sortList(l1);
    return 0;
}

