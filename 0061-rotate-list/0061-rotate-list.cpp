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
    ListNode* rotateRight(ListNode* head, int k) {
      if(head==NULL || head->next==NULL) return head;

        ListNode* curr = head,*newHead=head;
        int n = 0;
        while(curr){
           n++;
           curr=curr->next;
        }
        k = k%n;
        if(k==0)return head;

        int diff = n-k;
        

        curr = head;

        while(--diff){
          curr=curr->next;
        }
        newHead = curr->next;
        curr->next=NULL;
        curr =  newHead;

        
        while(curr->next!=NULL){
          curr=curr->next;
        }

        curr->next=head;

          return newHead;

    }
};