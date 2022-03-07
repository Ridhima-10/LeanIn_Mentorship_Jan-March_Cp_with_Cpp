LinkedListNode<int>* reverse(LinkedListNode<int>* head)
{
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* cur=head; 
    LinkedListNode<int>* next;
    if(head==NULL || head->next==NULL)
        return head;
    
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
       // write your code here
    if(head==NULL || head->next==NULL)
        return true;
    
    LinkedListNode<int>* temp=head;
    int len=0;
    
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    
   int mid;
    if(len%2==0)
        mid=len/2;
    else
        mid=(len/2)+1;
    
    // 1 2 3 2 1 
    // 1 2 3 1 2 
    //1 2 3 3 2 1
    
    // 8 9 9 
    int cnt=1;
    temp=head;
    while(cnt<mid)
    {
        temp=temp->next;
        cnt++;
    }    
    LinkedListNode<int>* reversedhead = reverse(temp->next);
    temp->next=reversedhead;    
    LinkedListNode<int>* cur1=head;
    LinkedListNode<int>* cur2=temp->next;
    
    while(cur2!=NULL)
    {
        if(cur1->data!=cur2->data)
            return false;
        else
        {
            cur1=cur1->next;
            cur2=cur2->next;
        }
    }
    return true;

}
