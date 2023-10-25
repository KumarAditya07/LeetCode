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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = new ListNode(0);
        ListNode* newHead = prev;
        while(head!=NULL){
          if(head->val == val)
            {
              prev->next = head->next;
              head=head->next;
            }
            else{
              prev->next=head;
              prev=head;
              head=head->next;
            }
           
        }

        return newHead->next;
    }
};