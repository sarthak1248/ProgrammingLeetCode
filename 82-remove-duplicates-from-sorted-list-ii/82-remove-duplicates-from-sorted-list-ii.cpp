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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode;
        dummy->next=head;
        ListNode* current = head;
        ListNode* previous= dummy;
      
       
        while(current!=NULL){
            
            while(current->next!=NULL && previous->next->val == current->next->val){
                current=current->next;
            }
            if(previous->next==current){
                previous=previous->next;
            }
            else{
                previous->next = current->next;
                current=current->next;
            }
            
            
            
        }
        current=dummy->next;
        return current;
    }
};