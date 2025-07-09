/*question: Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.*/



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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tp = head;
        while(tp != NULL && tp->next != NULL){
            if(tp->val == tp->next->val){
                ListNode* temp = tp->next;
                tp->next = temp->next;
                delete(temp);
            }
            else{
                tp = tp->next;
            }
        }
        return head;
    }
};
