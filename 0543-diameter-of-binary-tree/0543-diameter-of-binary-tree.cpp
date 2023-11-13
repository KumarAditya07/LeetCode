/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fMax(TreeNode* root,int &maxi)
    {
        if(root==NULL) return  0;
        int l = fMax(root->left,maxi);
        int r = fMax(root->right,maxi);
        
        maxi = max(maxi,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        fMax(root,maxi);
        return maxi;
    }
};