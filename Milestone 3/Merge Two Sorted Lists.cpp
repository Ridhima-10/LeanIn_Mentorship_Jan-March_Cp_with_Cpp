class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy=new ListNode(-1);
        ListNode* ptr3=dummy;
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        
        while(ptr1!=NULL && ptr2!=NULL)
        {
        if(ptr1->val<ptr2->val)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
            //ptr3=ptr3->next;
        }
        else
        {
             ptr3->next=ptr2;
            ptr2=ptr2->next;
           // ptr3=ptr3->next;
        }
            ptr3=ptr3->next;
        }
        
        while(ptr1!=NULL)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
            ptr3=ptr3->next;
        }
        
        
         while(ptr2!=NULL)
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
        }
        
        return dummy->next;
        
        
        
    }
};
