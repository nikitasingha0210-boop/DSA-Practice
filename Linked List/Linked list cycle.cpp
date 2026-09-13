/*
Problem Number: 141
Problem Statement: Given the head of a linked list, determine if the linked list has a cycle in it.
Difficulty: Easy
Topic: Linked List, Two Pointers, Floyd's Cycle Detection
Language: C++
*/



class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};