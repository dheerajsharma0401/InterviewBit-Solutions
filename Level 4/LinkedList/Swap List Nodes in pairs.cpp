/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    vector<int> v;
    ListNode  *temp;
    temp=A;
    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp=temp->next;
    }
    
    for(int i=0;i<v.size();i++)
    
    {
        swap(v[i],v[i+1]);
        i++;
    }
    temp=A;
    for(int i=0;i<v.size();i++)
    {
        temp->val=v[i];
        temp=temp->next;
    }
    return A;
}



