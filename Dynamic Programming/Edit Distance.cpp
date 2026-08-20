/*
LeetCode 72
Problem: Edit Distance
Topic: Arrays
Difficulty: Medium
Language: C++
*/




class Solution {
public:
    int minDistance(string word1, string word2) {

        int m = word1.size();
        int n = word2.size();

        // DP table
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        // Convert word1 to an empty string
        // Requires deleting all characters
        for (int i = 0; i <= m; i++) {
            dp[i][0] = i;
        }

        for (int j = 0; j <= n; j++) {
            dp[0][j] = j;
        }

        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {

                
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else {

                   
                    int insert = dp[i][j - 1];

                  
                    int deleteChar = dp[i - 1][j];

                    
                    int replace = dp[i - 1][j - 1];

                    dp[i][j] = 1 + min({
                        insert,
                        deleteChar,
                        replace
                    });
                }
            }
        }

        return dp[m][n];
    }
};