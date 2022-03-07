struct Node *insertAtBegining(struct Node *head, int x) {
    
    
    struct Node* newnode=new struct Node(x);

    newnode->next=head;
    head=newnode;
    

	//code here
}


//Function to insert a node at the end of the linked list.
struct Node *insertAtEnd(struct Node *head, int x)  {

	//code here
	struct Node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    struct Node* newnode=new struct Node(x);
    temp->next=newnode;

}
