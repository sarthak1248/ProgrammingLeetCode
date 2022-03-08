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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0;
        int len2=0;
        int diff;
        ListNode* ptr1=NULL;
        ListNode* ptr2=NULL;
        ListNode * tmp= headA;
        ListNode * tmp2=headB;
        while(tmp){
            tmp=tmp->next;
            len1++;
        }
        while(tmp2){
            tmp2=tmp2->next;
                len2++;
        }
        if(len1>len2){
            ptr1=headA;
            ptr2=headB;
            diff=len1-len2;
        }
        else{
            ptr1=headB;
            ptr2=headA;
            diff=len2-len1;
        }
        while(diff){
if(ptr1==NULL){
    return NULL;
}
            ptr1=ptr1->next;
            diff--;
        }
        while(ptr1&&ptr2){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
    }
};