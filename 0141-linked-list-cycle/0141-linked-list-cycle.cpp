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
        unordered_set<ListNode*> st;
        ListNode* curr = head;
        while(curr!=NULL){
          if(st.find(curr)!=st.end()){
            return 1;
          }else{
            st.insert(curr);
            curr=curr->next;
          }
        }

        return 0;
    }
};