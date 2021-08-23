/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
 ListNode* reverse(ListNode *head)
 {
     ListNode* curr=head,*next=NULL,*prev=NULL;
     
     while(curr!=NULL)
     {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     return prev;
 }
     
     
     
 
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
  //A=reverse(A);
 //B=reverse(B);
 int carry=0;
  
ListNode* sum=NULL;

while(A!=NULL ||B!=NULL || carry!=0)
{
    if(A)
    {
    carry+=A->val;
    A=A->next;
    }

    if(B)
    {
        carry+=B->val;
        B=B->next;
    }

    int data=carry%10;
    carry=carry/10;

    ListNode* Node=new ListNode(data);
    Node->next=sum;
    sum=Node;

}

sum=reverse(sum);
return sum;
    
}


