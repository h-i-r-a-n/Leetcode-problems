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
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;

        return 1+ max(height(root->left),height(root->right));
    }

    TreeNode* solve(TreeNode* root, int maxDepth,int currDepth)
    {
        if(root==NULL) return NULL;

        if(currDepth==maxDepth) return root;

        TreeNode* L = solve(root->left,maxDepth,currDepth+1);
        TreeNode* R = solve(root->right,maxDepth,currDepth+1);

        if(L&&R) return root;

        if(L) return L;
        if(R) return R;
        return NULL;
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        
        int h = height(root);

        return solve(root,h,1);
    }
};