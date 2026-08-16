/*
LeetCode 448
Problem: Find All Numbers Disappeared in an Array
Topic: Arrays
Difficulty: Easy
Language: C++
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        // Mark numbers that are present
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;

            if (nums[index] > 0)
                nums[index] = -nums[index];
        }

        vector<int> ans;

        // Positive values represent missing numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;
    }
};