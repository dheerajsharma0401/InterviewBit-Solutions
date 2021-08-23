/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::sortList(ListNode* A) {
    
    vector<int> v;
    
    ListNode *temp=A;
    
    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp=temp->next;
    }
    
    sort(v.begin(),v.end());
    
    temp=A;
    int i=0;
    while(temp!=NULL)
    {
        temp->val=v[i];
        i++;
        temp=temp->next;
    }
    
    return A;
}
