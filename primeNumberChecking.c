#include<stdio.h>
#include<math.h>
int main(){
int flag=0,i;
int n;
printf("Enter the number:\n");
scanf("%d",&n);
  for(i=2;i<n;i++){
  if(n%i==0)
  {
   flag=1;
    }
  }
  if(flag==1)
    printf("The number is not prime\n");
  else
    printf("The number is prime\n");
 }
