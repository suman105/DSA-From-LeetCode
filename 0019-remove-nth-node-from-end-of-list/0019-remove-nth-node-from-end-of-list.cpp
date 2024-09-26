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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {   
        struct ListNode *temp=head;
        int cnt=0;
        while(temp){
            ++cnt;
            temp=temp->next;
        }
        if(cnt-n == 0)  return head->next;
        int k = cnt-n;
        k=k-1;
        struct ListNode *temp1=head;
        while(k){
            temp1 = temp1->next;
            --k;
        }
        temp1->next = temp1->next->next;
        return head;
        // struct ListNode *temp=head; // For Transversal
        // struct ListNode *temp1=head; // For returning
        // while(temp1 && n)
        // {
        //     temp = temp->next;
        //     --n;
        // }
        // while(temp && temp1 && temp->next){
        //     temp = temp->next;
        //     temp1 = temp1->next;
        // }
        // temp1->next = temp;
        // return head;
    }
};