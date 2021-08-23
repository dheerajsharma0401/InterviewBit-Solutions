/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    if(A==NULL&&B!=NULL)
        return B;
    if(A!=NULL&&B==NULL)
        return A;
    if(A==NULL&&B==NULL)
        return NULL;
    if(A->val >B->val)
        swap(A,B);
    
    ListNode *temp=A;
    int val;
    while(B)
    {
       int val=B->val;
       while(temp->next && temp->next->val<val)
       temp=temp->next;

       ListNode* ptr=temp->next;
       temp->next=B;
       B=B->next;
       temp->next->next=ptr;

    }
    return A;
}


