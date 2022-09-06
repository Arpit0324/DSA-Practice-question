//Q) Given the root of a binary tree, return the same tree where every subtree (of the given tree) not containing a 1 has been removed. A subtree of a node node is node plus every node that is a descendant of node.



//if root == null: return null
//root.left = pruneTree(root.left)
//root.right = pruneTree(root.right)
//if root.left == null and root.right == null and root.val == 0: return null
//return root






class Solution {
    public:
       TreeNode* pruneTree(TreeNode* root) {
    
    if(!root) return root;
    
    root->left = pruneTree(root->left);       //postorder traversal
    root->right = pruneTree(root->right);
    
    if(root->val == 0 && !root->left && !root->right){    //if root->val is 0, then check if it's 
        return NULL;                                      //leftSubtree and rightSubtree exists or not
    }                                                     //if not return NULL
    return root;
}
};
TC O(N)