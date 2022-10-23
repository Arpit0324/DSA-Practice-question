class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node* s = head ;  Node*f = head ;
        while(f!=NULL && f->next!=NULL){
            f = f->next->next ;
            s = s->next;
            
        }
        return s->data;
    }
};
