/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* m = NULL;
        ListNode *ms = NULL;
        ListNode* p1 = list1, * p2 = list2;
    if(!list1){
        return list2;
    }
    if(!list2){
        return list1;
    }
        if(p1->val < p2->val){
                m = p1;
                p1 = p1->next;
            }
            else {
                m = p2;
                p2 = p2->next;
            }
             ms = m;
          //  m = m->next;
        while(p1 != 0 && p2 != 0){
            if(p1->val < p2->val){
                m->next = p1;
                // m = m->next;
                p1 = p1->next;
            }
            else {
                m->next = p2;
                // m = m->next;
                p2 = p2->next;
            }
            m = m->next;
        }
        if(p1){
            m->next = p1;
        }
        else {
            m->next = p2;
        }
        return ms;
    }
};