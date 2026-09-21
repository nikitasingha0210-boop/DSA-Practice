/*
LeetCode 
Problem: Binary Tree Inorder Traversal
Topic: Stack
Difficulty: Easy
Language: C++
*/



class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        if (root == NULL)
            return ans;

        // Traverse left subtree
        vector<int> left = inorderTraversal(root->left);
        ans.insert(ans.end(), left.begin(), left.end());

        // Visit root
        ans.push_back(root->val);

        // Traverse right subtree
        vector<int> right = inorderTraversal(root->right);
        ans.insert(ans.end(), right.begin(), right.end());

        return ans;
    }
};