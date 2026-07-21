/*
LeetCode 26
Problem: Remove Duplicates from Sorted Array
Topic: Arrays, Two Pointers
Difficulty: Easy
Language: C++
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;  // position for next unique element

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};