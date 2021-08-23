/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode*temp=A;
    if(A==NULL ||A->next==NULL)
        return A;
    
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->val==temp->next->val)
        temp->next=temp->next->next;
        else
        
        temp=temp->next;
    }
    return A;
}

