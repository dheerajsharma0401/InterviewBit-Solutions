/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
   // unordered_map<RandomListNode*,RandomListNode*> m;
    
    RandomListNode* temp=A;
    
    while(temp!=NULL)
    {
    RandomListNode * r=new RandomListNode(temp->label);
    temp->random=r;
    temp=temp->next;
    }
    /*
    temp=A;
    RandomListNode* clone;
    while(temp!=NULL)
    {
        clone=m[temp];
        clone->next=m[temp->next];
        clone->random=m[temp->random];
      
        temp=temp->next;
    }
    */
    return A;
}
