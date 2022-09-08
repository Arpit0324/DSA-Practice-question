//ITERATIVE:

//The basic idea is referred from here: using stack to simulate the recursion procedure: for each node, travel to its left child until it's left leaf, 
//then pop to left leaf's higher level node A, and switch to A's right branch. 
//Keep the above steps until cur is null and stack is empty. As the following
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        while(curr || !s.empty()){
            while(curr){
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            ans.push_back(curr->val);
            curr = curr->right;
        }
        return ans;
    }
};

//Approach: (DFS Traversal)

//Inorder Traversal follows - Left Root Right
//If root==NULL we can simply return {};
//we declare a vector vec and simply push all the root->val after every left traversal and after that right traversal happens.

class Solution {
public:
    vector<int> vec; 
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        inorderTraversal(root->left);
        vec.push_back(root->val);
        inorderTraversal(root->right);
        return vec;
    }
};
