class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* nextnode;
        
        //1->2
        
        while(cur!=NULL)
        {
           // cout<<1;
            nextnode=cur->next;
            cur->next=prev;
            //nextnode->next=cur;
            prev=cur;
            cur=nextnode;
            
        }
        return prev;
    }
};
