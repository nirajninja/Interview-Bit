/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* head) {

    RandomListNode* nhead=new RandomListNode(-1);
    RandomListNode* curr=head;
    RandomListNode* prev=nhead;
    
    unordered_map<RandomListNode*,RandomListNode*>mp;
    while(curr!=NULL)
    {
        RandomListNode* node= new RandomListNode(curr->label);
        prev->next=node;
        mp[curr]=node;
        curr=curr->next;
        prev=prev->next;
        
    }
    
    nhead=nhead->next;
    RandomListNode* c1=head;
    RandomListNode* c2=nhead;
    
    while(c1!=NULL)
    {
        if(c1->random==NULL)
        {
            c2->random=NULL;
        }
        else{
            c2->random=mp[c1->random];
        }
        c2=c2->next;
        c1=c1->next;
    }
    
    return nhead;
}
