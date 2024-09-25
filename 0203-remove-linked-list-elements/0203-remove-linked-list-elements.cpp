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
    ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy =  new ListNode(-1);
    dummy->next = head;
    
    ListNode* temp = dummy;
    while(temp->next!=nullptr){
        if(temp->next->val==val){
            temp->next=temp->next->next;
        }
        else temp=temp->next;
    }
    return dummy->next;
    // ListNode* dummy = new ListNode(-1);
    //     dummy->next = head;
        
    //     ListNode* current = dummy;
        
    //     // Traverse the linked list
    //     while (current->next != nullptr) {
    //         if (current->next->val == val) {
    //             // Remove the node by skipping it
    //             current->next = current->next->next;
    //         } else {
    //             current = current->next;
    //         }
    //     }
        
    //     // Return the new head (next of dummy)
    //     return dummy->next;
    }
};