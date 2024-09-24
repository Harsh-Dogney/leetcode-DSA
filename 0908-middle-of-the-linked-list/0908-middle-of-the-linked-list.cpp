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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;  // Initialize temp pointer
        int cnt = 0;
        
        // Count the number of nodes in the list
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        // Find the middle index (0-indexed)
        int middleIndex = cnt / 2 ; 

        // Reset temp back to the head
        temp = head;
        
        // Move temp to the middle node
        for (int i = 0; i < middleIndex; i++) {
            temp = temp->next;
        }

        return temp;  // Return the middle node
    }
};
