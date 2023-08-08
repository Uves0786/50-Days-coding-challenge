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
        int size = 0;
        ListNode* temp = head;

        while(temp!=NULL)
        {
            temp = temp -> next;
            size++;
        }
        if(size < k) // is used when number of nodes not divisible by k;
        {
            return head;
        }
        if(head==NULL)
        {
            return NULL;
        }
         ListNode* forword=NULL;
         ListNode* curr=head;
         ListNode* prev=NULL;
        int count=0;

        // step 1 reverse k nodes
        while(curr!=NULL && count<k)
        {
            forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
            count++;
        }
        // using recursion call to reverse reaming nodes
        if(forword!=NULL)
        {
            head->next=reverseKGroup(forword,k);
        }
        return prev;
    }
};