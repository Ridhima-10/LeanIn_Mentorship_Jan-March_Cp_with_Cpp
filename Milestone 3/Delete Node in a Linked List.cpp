class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp=node;
        //node=NULL;
        //1->2->3->4
        //1->3->4
        while(temp->next!=NULL)
        {
            node->val=node->next->val;
            temp=temp->next;
            if(temp->next==NULL)
            {
                node->next=NULL;
                return;
            }
            node=temp;
        }
        
        
        //delete(temp);
        
    }
};
