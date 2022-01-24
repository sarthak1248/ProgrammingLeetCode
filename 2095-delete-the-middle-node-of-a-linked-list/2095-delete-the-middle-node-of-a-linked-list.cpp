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
        if(head->next==NULL || head==NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast =head;
        
        ListNode* curr=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        while(curr!=NULL){
            if(curr->next==slow){
                curr->next=curr->next->next;
            }
            curr=curr->next;
        }
        return head;
    }
};