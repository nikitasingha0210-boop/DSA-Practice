/*
LeetCode 53
Problem: Maximum Subarray
Topic: Arrays, Kadane's Algorithm
Difficulty: Medium
Language: C++
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if(sum > maxi)
                maxi = sum;

            if(sum < 0)
                sum = 0;
        }

        return maxi;


        
    }
};