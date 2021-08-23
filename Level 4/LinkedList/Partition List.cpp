/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* temp=A;
    vector<int> small;
    vector<int>big;
    
    
    while(temp!=NULL)
    {
        if(temp->val<B)
        small.push_back(temp->val);
        else
        big.push_back(temp->val);
        temp=temp->next;
        
        
    }
    
    int len1=small.size();
    temp=A;
    int index=0;
    while(len1--)
    {
        temp->val=small[index];
        index++;
        temp=temp->next;
    }
    
    int len2=big.size();
    index=0;
    while(len2--)
    {
        temp->val=big[index];
        index++;
        temp=temp->next;
        
    }
    
    return A;
    
}
