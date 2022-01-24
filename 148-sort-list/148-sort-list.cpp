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
        ListNode* curr=head;
        if(head==NULL ){
            return NULL;
        }
        int i=0;
        while(curr){
            curr=curr->next;
            i++;
        }
        curr=head;
        int arr[i];
        int j=0;
        while(curr){
            arr[j]=curr->val;
            curr=curr->next;
            j++;
        }
        
        sort(arr,arr+j);
        curr=head;
        i=0;
        while(curr){
            curr->val=arr[i];
            curr=curr->next;
            i++;
        }
        return head;
        
    }
};