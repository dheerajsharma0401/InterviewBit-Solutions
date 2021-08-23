/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* curr=A;
    ListNode* prev=NULL ,*q=NULL;
    int count=B;
    while(curr!=NULL && count--)
    {
        q=curr->next;
        curr->next=prev;
        prev=curr;
        curr=q;
        
    }
    
    if(curr!=NULL)
    {
        A->next=reverseList(q,B);
    }
    
    return prev;
}



