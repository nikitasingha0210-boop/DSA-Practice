/*
LeetCode 99
Problem: REcover Binary Search Tree
Topic: Two Pointers
Difficulty: Medium
Language: C++
*/



class Solution {
public:
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* root) {

      
        if (root == nullptr)
            return;

        
        inorder(root->left);

        
        if (prev != nullptr && prev->val > root->val) {

           
            if (first == nullptr)
                first = prev;

           
            second = root;
        }

       
        prev = root;

        
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {

        inorder(root);

       
        swap(first->val, second->val);
    }
};