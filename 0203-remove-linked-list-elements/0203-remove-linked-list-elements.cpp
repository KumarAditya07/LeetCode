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
        ListNode* last = new ListNode(0),*new_head=last;
        while(head)
        {
            if(head->val==val)
            {
                
            }
            else{
                last->next=head;
                last=head;
            }
            head=head->next;
        }
        last->next=NULL;
            return new_head->next;
    }
};