bool detectLoop(Node* head)
{
    // your code here
    Node* check1=head;
    Node* check2=head;
    while(check2!=NULL &&check2->next!=NULL ){
        check1=check1->next;
        check2=check2->next->next;
        if(check1==check2){
            return 1;
        }
       
    }
     return 0;
}
