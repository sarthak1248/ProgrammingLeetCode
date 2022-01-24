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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy = new ListNode();
        dummy->next=head;
        ListNode* tmp1= dummy;
        ListNode* curr=head;
        ListNode* dummy1 = new ListNode();
        dummy1->next=head;
        ListNode* tmp2= dummy1;
        
        while(curr!=NULL){
            if(curr->val<x){
                tmp1->next=curr;
                tmp1=tmp1->next;
                
            }
            else{
                tmp2->next=curr;
                tmp2=tmp2->next;
            }
            curr=curr->next;
        }
        
        tmp2->next=NULL;
        tmp1->next= dummy1->next;
        return dummy->next;
        
        
    }
};