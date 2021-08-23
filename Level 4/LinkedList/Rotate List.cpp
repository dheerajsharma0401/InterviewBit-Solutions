/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode *temp=A;
    int counter=0;
    if(temp->next==NULL)
    return A;
    int count=0;
    temp=A;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    ListNode* last=A;
       while(last->next!=NULL)
    {
    
        last=last->next;
    }
    temp=A;
    B=B%count;
   
    int tot=count-B-1;
    while(tot--)
    {
        temp=temp->next;
        
    }
    
    last->next=A;
    A=temp->next;
    temp->next=NULL;

    return A;
    
}
