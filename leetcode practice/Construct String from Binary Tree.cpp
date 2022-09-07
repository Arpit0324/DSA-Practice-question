//Given the root of a binary tree, construct a string consisting of parenthesis and integers from a binary tree with the preorder traversal way, and return it.

//Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.


class Solution {
public:
    string helper(TreeNode* root){
        if(!root)   return "()";
        
        string left  = helper(root->left);
        string right = helper(root->right);
        
        if(left=="()" && right=="()")      //  if is leaf node , then return the elements in brackets
            return "(" + to_string(root->val) + ")";
        
        if(right!="()")      // if right not empty , we need to add both left and right elements
            return "(" + to_string(root->val) +left + right + ")";
        else                   // but if right empty , we need to add left element only
            return "(" + to_string(root->val) +left + ")";
    }
    
    string tree2str(TreeNode* root) {
        string ans=helper(root);
        int len = ans.length();
        return ans.substr(1,len-2);      // to remove starting and ending brackets
    }
};
