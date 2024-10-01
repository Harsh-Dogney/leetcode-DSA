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
    ListNode* sortList(ListNode* head) {
     if (head == NULL || head->next == NULL) return head;
        
        // Use a vector to store the values of the nodes
        std::vector<int> arr;
        ListNode* temp = head;

        // Collect all values into the vector
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Sort the values in the vector
        std::sort(arr.begin(), arr.end());

        // Reset temp to head and assign sorted values back to the linked list
        temp = head;
        int i = 0;
        while (temp != NULL) {
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }

        return head;    
    }
};