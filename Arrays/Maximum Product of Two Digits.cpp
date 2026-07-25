/*
LeetCode 3536
Problem: Maximum Product of Two Digits
Topic: Arrays
Difficulty: Easy
Language: C++
*/

class Solution {
public:
    int maxProduct(int n) {
        int largest = 0;
        int secondLargest = 0;

        while (n > 0) {
            int digit = n % 10;

            if (digit > largest) {
                secondLargest = largest;
                largest = digit;
            } 
            else if (digit > secondLargest) {
                secondLargest = digit;
            }

            n /= 10;
        }

        return largest * secondLargest;
    }
};