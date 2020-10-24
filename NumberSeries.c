#include<stdio.h>
#include<string.h>
int main(){
 int n,p1;
 printf("Enter the position number:\n");
 scanf("%d",&n);
 if(n%2==1){
    p1=2*(n/2);
  }
  else if(n%2==0){
    p1=n/2-1;
  }
  printf("The %d th term is %d:\n",n,p1);
 }
