/*
LeetCode 125
Problem: Valid Palindrome
Topic: Arrays
Difficulty: Medium
Language: C++
*/




class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            
            while (left < right && !isalnum(s[left])) {
                left++;
            }

          
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

           
            left++;
            right--;
        }

        return true;
    }
};