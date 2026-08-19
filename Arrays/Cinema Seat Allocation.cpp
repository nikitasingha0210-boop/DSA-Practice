/*
LeetCode 1386
Problem: Cinema Seat Allocattion 
Topic: Two Pointers
Difficulty: Medium
Language: C++
*/


class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        
        unordered_map<int, int> reserved;

        for (auto &seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            
            reserved[row] |= (1 << col);
        }

       
        int answer = (n - reserved.size()) * 2;

       
        int leftGroup  = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);
        int middleGroup = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);
        int rightGroup = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9);

        
        for (auto &[row, mask] : reserved) {

            bool leftAvailable = (mask & leftGroup) == 0;
            bool rightAvailable = (mask & rightGroup) == 0;

            
            if (leftAvailable && rightAvailable) {
                answer += 2;
            }

            
            else if (leftAvailable ||
                     rightAvailable ||
                     (mask & middleGroup) == 0) {
                answer += 1;
            }
        }

        return answer;
    }
};