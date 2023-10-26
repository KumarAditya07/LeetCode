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
    ListNode* removeNodes(ListNode* head) {
        ListNode* node = head,*Fnode = head;
        stack<ListNode*> st;
        st.push(node);
        node=node->next;

        while(node!=NULL){
          while(node && st.size() && st.top()->val < node->val)
             {
               st.pop();
             }
            if(st.size()==0){
               Fnode=node;

             }
             else{
               st.top()->next = node;
             }
             st.push(node);
             node=node->next;
        }


             return Fnode;
         
    }
};