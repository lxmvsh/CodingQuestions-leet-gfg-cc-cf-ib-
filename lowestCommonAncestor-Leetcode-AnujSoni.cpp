class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return root;
        if(root->val == p->val || root->val == q->val)
            return root;
        TreeNode* lca1 = lowestCommonAncestor(root->left,p,q);
        TreeNode* lca2 = lowestCommonAncestor(root->right,p,q);
        if(lca1 && lca2)
            return root;
        if(lca1)
            return lca1;
        else
            return lca2;
    }
};
