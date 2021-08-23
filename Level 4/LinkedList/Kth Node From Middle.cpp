/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    
    ListNode* temp=A;
    
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    if(count==1)
    {
        if(B>=1)
        return -1;
        else
        return A->val;
    }
    int mid=(count/2)+1;
    
    
    
    if(B>mid)
    return -1;
    
    int dist=mid-B;
    if(dist==1)
    return A->val;
    temp=A;
    dist--;
    while(dist--)
    {
        temp=temp->next;
    }
    return temp->val;
    
    
    
}

