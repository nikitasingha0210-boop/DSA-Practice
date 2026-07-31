/*
LeetCode 3016
Problem: Minimum Number of Pushes to Type Word II
Topic: Strings
Difficulty: Medium
Language: C++
*/

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for (char c : word)
            freq[c - 'a']++;

        sort(freq.begin(), freq.end(), greater<int>());

        int pushes = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0)
                break;

            pushes += freq[i] * (i / 8 + 1);
        }

        return pushes;
    }
};