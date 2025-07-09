/*q:- You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.*/



//  Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
      
//   };
 void insertAtTail(ListNode* &head,int v){
        ListNode* temp = new ListNode(v);
        if(head == NULL){
            head = temp;
            return;
        }
        ListNode* tp = head;
        while(tp->next != NULL){
            tp = tp->next;
        }
        tp->next = temp;
      }

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = NULL;
        ListNode* tp1 = list1;
        ListNode* tp2 = list2;

        while(tp1 != NULL && tp2 != NULL){
            if(tp1->val < tp2->val){
                insertAtTail(ans,tp1->val);
                tp1 = tp1->next;
            }
            else{
                insertAtTail(ans,tp2->val);
                tp2 = tp2->next;
            }
            
        }
        while(tp1 != NULL){
            insertAtTail(ans,tp1->val);
            tp1 = tp1->next;
        }   

        while(tp2 != NULL){
            insertAtTail(ans,tp2->val);
            tp2 = tp2->next;
        }

    return ans;
    }
};
