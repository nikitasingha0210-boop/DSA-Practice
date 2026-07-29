/*
LeetCode 3518
Problem: Smallest Palindromic Rearrangement II
Topic: Strings
Difficulty: Medium
Language: C++
*/

class Solution {
public:
    string smallestPalindrome(string s, int k) {
        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        string half = "";
        char mid = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2)
                mid = char(i + 'a');

            half.append(freq[i] / 2, char(i + 'a'));
        }

        vector<string> palindromes;

        sort(half.begin(), half.end());

        do {
            string right = half;
            reverse(right.begin(), right.end());

            string cur = half;
            if (mid) cur += mid;
            cur += right;

            palindromes.push_back(cur);
        } while (next_permutation(half.begin(), half.end()));

        sort(palindromes.begin(), palindromes.end());
        palindromes.erase(unique(palindromes.begin(), palindromes.end()), palindromes.end());

        return palindromes[k - 1];
    }
};