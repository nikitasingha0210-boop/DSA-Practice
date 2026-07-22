/*
LeetCode 169
Problem: Majority Element
Topic: Boyer-Moore Voting Algorithm
Difficulty: Easy
Language: C++
*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return  nums[nums.size() / 2];
  

        
    }
};