/*
LeetCode 144
Problem: Binary Tree preorder Traversal
Topic: Stack
Difficulty: Easy
Language: C++
*/



class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        // Visit root
        ans.push_back(root->val);

        // Traverse left subtree
        preorder(root->left, ans);

        // Traverse right subtree
        preorder(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};