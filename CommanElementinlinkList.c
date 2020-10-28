int intersectPoint(Node* head1, Node* head2)
{
    int c1=0,c2=0,d;
    int i;
    
     Node *check1=head1;
     Node *check2=head2;
    while(check1!=NULL){
        check1=check1->next;
        c1=c1+1;
        
    }
    while(check2!=NULL){
        check2=check2->next;
        c2=c2+1;
    }
    d=abs(c1-c2);
    check1=head1;
    check2=head2;
    if(c2>c1){
    for(i=0;i<d;i++){
        check2=check2->next;
      }
    }
    else{
        for(i=0;i<d;i++){
            check1=check1->next;
        }
    }
    
    while(check1!=NULL){
        if((check1)==(check2)){
        return(check1->data);
        
            
        }
        
        check1=check1->next;
        check2=check2->next;
            
    }
    return -1;
}
