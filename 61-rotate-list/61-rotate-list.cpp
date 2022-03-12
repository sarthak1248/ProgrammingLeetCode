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
    ListNode* rotateRight(ListNode* head, int k) {
      
        if(head==NULL){
            return head;
        }
        ListNode* tmp = head;
        int len = 1;
        while(tmp->next!=NULL){
            tmp = tmp->next;
            len++;
        }
        if(k>len){
         k=k%len;
        }
        if(k==len){
            return head;
        }
        k=len-k;
        ListNode* kthNode = head;
        int curr = 1;
        while(curr<k && kthNode->next!=NULL){
            kthNode = kthNode->next;
            curr++;
        }
        tmp->next=head;
        head=kthNode->next;
        kthNode->next=NULL;
        return head;
        
        
    }
};