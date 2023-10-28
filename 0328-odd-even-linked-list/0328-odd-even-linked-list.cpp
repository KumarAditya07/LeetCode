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
    ListNode* oddEvenList(ListNode* head) {
      //naive solution  

        // vector<int> odd;
        // vector<int> even;
        // ListNode *curr = head;
        // int index = 1;
        // while(curr!=NULL){
        //   if(index % 2 != 0) odd.push_back(curr->val);
        //     else even.push_back(curr->val);
          
        //   curr=curr->next;
        //   index++;
        // }
        //   curr = head;


        // for(auto i : odd){
        //   curr->val = i;

        //   curr=curr->next;
        // }

        // for(auto i : even){
        //   curr->val = i;

        //   curr=curr->next;
        // }

        
        //  return head;
 

      //using two pointer approch 
       
       if(head == NULL || head->next == NULL) return head;

      ListNode *odd=head,*even=head->next,*evenHead=even;

      while(odd->next!=NULL && even->next!= NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
      }
       odd->next=evenHead;

      return head;


    }
};