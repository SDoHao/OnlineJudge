#include<iostream>

//Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
};
 
 class Solution {

 public:
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode* pLNst1 = list1, * pLNst2 = list2;
         ListNode* pLNnew = new ListNode();
         list1 = pLNnew;
         while (pLNst1 != nullptr && pLNst2 != nullptr)
         {
             if (pLNst1->val <= pLNst2->val)
             {
                 pLNnew->next = pLNst1;
                 pLNst1 = pLNst1->next;
             }
             else
             {
                 pLNnew->next = pLNst2;
                 pLNst2 = pLNst2->next;
             }
             pLNnew = pLNnew->next;
         }
         if (pLNst1 != nullptr)
         {
             pLNnew->next = pLNst1;
         }
         else if (pLNst2 != nullptr)
         {
             pLNnew->next = pLNst2;
         }
         return list1->next;
     }
 };