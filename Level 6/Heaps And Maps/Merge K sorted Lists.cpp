/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue<int,vector<int>,greater<int>> pq;
    int i;

    ListNode *temp;

    for(i=0; i<A.size(); i++)
    {
        temp = A[i];
        while(temp)
        {
            pq.push(temp->val);
            temp = temp->next;
        }
    }

ListNode *head = new ListNode(INT_MIN);

temp = head;

while(!pq.empty())
{
    temp->next = new ListNode(pq.top());
    pq.pop();
    temp = temp->next;
}

return head->next;
}
