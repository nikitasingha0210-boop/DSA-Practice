/*
LeetCode 442
Problem: Find All Duplicates in an Array
Topic: Arrays
Difficulty: Medium
Language: C++
*/


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if (nums[index] < 0) {
                ans.push_back(abs(nums[i]));
            } else {
                nums[index] = -nums[index];
            }
        }

        return ans;
    }
};