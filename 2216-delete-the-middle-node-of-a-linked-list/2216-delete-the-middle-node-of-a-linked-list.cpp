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
    ListNode* deleteMiddle(ListNode* head) {
    int cnt=0;
    ListNode* temp=head;
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }    
    int mid = cnt/2;
    temp=head;
    while(temp!=NULL){
        mid--;
        if(mid==0){
            ListNode* middle =temp->next;
            temp->next=temp->next->next;
            delete(middle);
        }
        temp=temp->next;
    }
    return head;
    }
};