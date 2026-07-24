/*
LeetCode 287
Problem: Find the Duplicate Number
Topic: Linked List (Cycle Detection)
Difficulty: Medium
Language: C++
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Step 1: Find the intersection point
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Step 2: Find the entrance to the cycle
        slow = nums[0];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};