/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * newNode = new Node(0);
        unordered_map<Node*,Node*>mp;
    Node* curr = head,*newCurr = newNode;

        while(curr!=NULL){
          Node *temp = new Node(curr->val);
          mp.insert({curr,temp});
          newCurr->next = temp;
          newCurr=newCurr->next;
          curr=curr->next;

        }
        curr = head,newCurr = newNode->next;

       while(curr!=NULL){
         Node *random = curr->random;
         Node *newRandom = mp[random];
         newCurr->random = newRandom;
         newCurr=newCurr->next;
          curr=curr->next;

       }

       return newNode->next;
    }
};