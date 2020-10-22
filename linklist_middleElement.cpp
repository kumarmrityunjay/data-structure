int getMiddle(Node *head)
{
   // Your code here
   int count=1,i;
   struct Node *p=head;
   while(p->next!=NULL)
   {  
       p=p->next;
       count=count+1;
   }
      int mid;
       mid=1+count/2;
  p=head;
  for(i=0;i<mid-1;i++)
  {
      p=p->next;
  }
   return(p->data);
}
