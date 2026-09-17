/*
Problem Number: 142
Problem Statement: Linked List Cycle II 
Difficulty Level: Medium
Topic: Linked List, Two Pointers, Floyd's Cycle Detection
Language: C++
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect if a cycle exists
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                break;
            }
        }

        
        if (fast == nullptr || fast->next == nullptr) {
            return nullptr;
        }

        
        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};