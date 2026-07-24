/*
LeetCode 3514
Problem: Number of Unique XOR Triplets II
Topic: Bit Manipulation, Hashing
Difficulty: Medium
Language: C++
*/

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return 1;

        unordered_set<int> pairXor;
        unordered_set<int> tripletXor;

        // Store all unique XORs of pairs
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                pairXor.insert(nums[i] ^ nums[j]);
            }
        }

        // XOR each pair result with every element
        for (int x : pairXor) {
            for (int num : nums) {
                tripletXor.insert(x ^ num);
            }
        }

        return tripletXor.size();
    }
};