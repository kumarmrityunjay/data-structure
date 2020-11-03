bool isPalindrome(Node *head)
{
    int i=0,j=0;
    int count=0;
    int p=0;
    Node *temp1=head;
    Node *temp2=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
        count=count+1;
    }
    temp1=head;
    for(i=0;i<count;i++){
        for(j=0;j<(count-i);j++){
            temp2=temp2->next;
             }
         if(temp1->data==temp2->data)
            {
                p=p+1;
            }
           temp1=temp1->next;
           temp2=head;
                 
       }
    if(count==p)
       return(1);
  else
       return(0);
}

