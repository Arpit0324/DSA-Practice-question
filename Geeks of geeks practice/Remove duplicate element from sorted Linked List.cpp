Node *removeDuplicates(Node *head)
{
    Node* prev=head;
    Node* curr=head;
    while(curr!=NULL)
    {
        if(prev->data==curr->data){
            prev->next=curr->next;
            
        }
        else
        prev=curr;
        curr=curr->next;
        
    }

        return head;
}
