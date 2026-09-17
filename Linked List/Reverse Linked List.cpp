/*
Problem Number: 206
Problem Statement: Reverse Linked List
Difficulty Level: Easy
Topic: Linked List, Two Pointers
Language: C++
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            ListNode* next = current->next;
            
            current->next = prev;
            
            prev = current;
            current = next;
        }

        return prev;
    }
};