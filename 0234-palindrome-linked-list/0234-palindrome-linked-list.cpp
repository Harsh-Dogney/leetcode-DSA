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
    bool isPalindrome(ListNode* head) {
        stack<int> st;  // Use stack<int> instead of stack<ListNode*> to store values, not node addresses
        ListNode* temp = head;

        // Push all node values onto the stack
        while (temp != NULL) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Reset temp to head
        temp = head;

        // Now check for palindrome by comparing node values from stack and list
        while (temp != NULL) {
            if (st.top() != temp->val) {
                return false;
            }
            st.pop();
            temp = temp->next;
        }

        return true;  // Return true if all values matched
    }
};
