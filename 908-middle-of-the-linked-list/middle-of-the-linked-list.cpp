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

    int findln(ListNode* head){
        int c = 0;
        while(head != 0){
            c++;
            head = head->next;
        }
        return c;
    }

    ListNode* middleNode(ListNode* head) {
        //int l = findln(head);
        ListNode* slow = head, *fast = head, *prev = NULL, *midval = 0;
        while(fast != NULL && fast->next != NULL){
                //prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
       // ListNode* mid;
        // if(l%2 == 0){
            return slow;
            //midval = prev;
        // }
        // else{ 
        //     return slow;
        //    // midval = slow;
        // }
        // ListNode* mid = midval
        // while(midval != NULL){

        
    }
};