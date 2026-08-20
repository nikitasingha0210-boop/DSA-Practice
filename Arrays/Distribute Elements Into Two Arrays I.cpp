/*
LeetCode 3069
Problem: Distribute Elements Into Two Arrrays
Topic: Arrays
Difficulty: Medium
Language: C++
*/

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {

        vector<int> arr1;
        vector<int> arr2;

        
        arr1.push_back(nums[0]);

        
        arr2.push_back(nums[1]);

        
        for (int i = 2; i < nums.size(); i++) {

            // Compare the last elements
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            }
            else {
                arr2.push_back(nums[i]);
            }
        }

        
        vector<int> ans = arr1;

        for (int x : arr2) {
            ans.push_back(x);
        }

        return ans;
    }
};