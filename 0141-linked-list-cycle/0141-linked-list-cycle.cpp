/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
             if(head==NULL||head->next==NULL) return 0;

        ListNode* slow=head,*fast=head->next;

        while(slow!=fast){
          if(fast==NULL||fast->next==NULL) return 0;
          fast=fast->next->next;
            slow=slow->next;
        }

       

        return 1;
        
        
        
        
        
        
        
        
   }
};