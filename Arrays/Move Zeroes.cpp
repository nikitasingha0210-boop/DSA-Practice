/*
LeetCode 283
Problem: Move Zeroes
Topic: Two Pointers
Difficulty: Easy
Language: C++
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};