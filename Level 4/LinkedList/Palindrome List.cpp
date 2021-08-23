/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 ListNode* reverse(ListNode* head)
 {
     ListNode * curr=head,*next=NULL,*prev=NULL;
     while(curr!=NULL)
     {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     return prev;
 }
int Solution::lPalin(ListNode* A) {
    vector<int > v;
        
        bool status=true;
        ListNode *temp=A;
        int counter=0;
        while(temp!=NULL)
        {
            counter++;
            temp=temp->next;
        }
        
        ListNode *head1=A;
        temp=A;
        
        counter=counter/2;
        while(counter--)
        temp=temp->next;
        
        ListNode *head2=temp;
        //temp->next=NULL;
        temp=head2;
       /* while(temp!=NULL)
        {
            cout<<temp->val;
            temp=temp->next;
        }*/
        head2=reverse(head2);
        
        while(head2!=NULL && head1!=NULL)
        {
            if(head1->val!=head2->val)
            return 0;
            head1=head1->next;
            head2=head2->next;
        }
        return 1;
     
    }


