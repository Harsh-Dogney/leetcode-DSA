/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // If the list is empty or left position is the same as right, return
        // the original list
        if (head == nullptr || left == right) {
            return head;
        }

        // Create a dummy node to handle edge case when left = 1
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        // Move prev to the node just before the left position
        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }

        // Current node is the node at left position
        ListNode* curr = prev->next;

        // Reverse the portion of the linked list between left and right
        // positions
        for (int i = 0; i < right - left; i++) {
            ListNode* nextNode = curr->next;
            curr->next = nextNode->next;
            nextNode->next = prev->next;
            prev->next = nextNode;
        }

        // Return the updated head of the linked list
        return dummy->next;
    }
};