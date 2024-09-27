/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode *temp = head;
    map<ListNode* , int>mp;
    if(head==NULL || head->next==NULL) return NULL;
    while(temp!=NULL){
        if(mp.find(temp) != mp.end()){
            return temp;
        }
        mp[temp]=1;
        temp=temp->next;
    }    
    return NULL;
    }
};