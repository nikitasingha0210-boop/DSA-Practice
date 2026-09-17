/*
Problem Number: 148
Problem Statement: Sort List
Difficulty Level: Medium
Topic: Linked List, Merge Sort, Divide and Conquer
Language: C++
*/

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

       
        ListNode* mid = slow->next;
        slow->next = nullptr;

      
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (left != nullptr && right != nullptr) {
            if (left->val <= right->val) {
                current->next = left;
                left = left->next;
            } else {
                current->next = right;
                right = right->next;
            }

            current = current->next;
        }

        if (left != nullptr) {
            current->next = left;
        } else {
            current->next = right;
        }

        ListNode* result = dummy->next;
        delete dummy;

        return result;
    }
};