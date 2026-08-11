/*
LeetCode 2996
Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
Topic: Arrays
Difficulty: Easy
Language: C++
*/

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        // Find the sum of the longest sequential prefix
        int i = 1;

        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
            i++;
        }

        // Find the smallest integer >= sum
        // that does not exist in nums
        unordered_set<int> st(nums.begin(), nums.end());

        while (st.count(sum)) {
            sum++;
        }

        return sum;
    }
};