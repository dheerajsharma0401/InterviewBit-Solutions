/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B)

{
    ListNode* temp=A;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    if(count==B)
    {
        A=A->next;
        return A;
    }
    else
    if(count<B)
    {
        A=A->next;
        return A;
    }
    else
    {
        temp=A;
        int diff=(count-B)-1;
        while(diff--)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
    
    return A;
    
    
    
    
}

