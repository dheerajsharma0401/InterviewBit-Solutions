
  ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    
    int i=1;
    
    ListNode *start, *end, *prev, *next;
    
    ListNode *temp=new ListNode(0);
    
    temp->next=A;
    
    ListNode *curr=temp;
    
    while(i != (B)){
        curr=curr->next;
        i++;
    }
    
    
    start=curr;
    end=curr->next;
    curr=curr->next;
    prev=NULL;
    
    while(i != (C+1)){
        next=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=next;
        
        i++;
    }
    
    start->next=prev;
    end->next=curr;
    
    return temp->next;
    
}


