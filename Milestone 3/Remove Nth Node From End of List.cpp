class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp=head;
        
        int l=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            l++;
        }
        if(l==n)
        {
            ListNode* deletednode=head;
            head=head->next;
            delete(deletednode);
            return head;
        }
        
        l=l-n;
        temp=head;
        
        while(l!=1)
        {
            temp=temp->next;
            l--;
        }
        ListNode* deletednode=temp->next;
        
        temp->next=temp->next->next;
        delete(deletednode);
        
        return head;
        
        
    }
};
