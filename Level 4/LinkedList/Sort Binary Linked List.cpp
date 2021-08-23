/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    
    ListNode * temp=A;
    int count=0;
    
    while(temp!=NULL)
    {
        if(temp->val==0)
        count++;
        temp=temp->next;
        
    }
    
    temp=A;
    while(count--)
    {
        temp->val=0;
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        temp->val=1;
        temp=temp->next;
    }
    
    return A;
}
