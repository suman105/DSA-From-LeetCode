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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        // ListNode *cur=head,*prev=NULL,*next=NULL;
        // int temp=0;
        // while(!cur && temp<k)
        // {
        //     next = cur->next;
        //     cur->next = prev;
        //     prev=cur;
        //     cur=next;
        //     ++temp;
        // }

        // if(cur) head->next = reverseKGroup(cur,k);
        // return prev;
        if(head==NULL)
            return NULL;
        
        ListNode *cur=head,*prev=NULL,*next=NULL,*temp=head;
        int s=0,length=0;
        while(temp){
            ++length;
            temp=temp->next;
        }
        if(length<k)    return head;
        while(cur!=NULL && s<k)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            s++;
        }
        if(cur!=NULL)
            head->next = reverseKGroup(cur,k);
            
        return prev;

    }
};