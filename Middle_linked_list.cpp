class Solution {
public:
    int size(ListNode* head)
    {
        int sz=0;
        ListNode*tmp=head;
        while(tmp!=NULL)
        {
            sz++;
            tmp=tmp->next;
        }
        return sz;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode *tmp=head;
        for(int i=1; i<=sz/2; i++)
        {
            tmp=tmp->next;
        }
        return tmp;
    }
};


// another way: using fast-slow pointer
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};