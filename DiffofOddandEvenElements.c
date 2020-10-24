#include<stdio.h>
#include<string.h>
int main()
{
  char str[10];
  int i,j=1,k=0;
  int sum1=0,sum2=0,diff;
  int l;
  printf("Enter the number :\n");
  scanf("%s",&str);
  printf("The given values :%s\n",str);
  l=strlen(str);
  printf("Length of values :%d\n",l);
  for(i=0;i<l;i++){
        if(k<l){
                sum1=sum1+(str[k]-48);
                k=k+2;
                }
         if(j<l){
                sum2=sum2+(str[j]-48);
                j=j+2;
                }
  }
  printf("Sum of Odd position elements :%d\n",sum1);
  printf("Sum of Even position elements :%d\n",sum2);
     diff=abs(sum1-sum2);
     printf("The difference of even and odd elements in the given value:%d",diff);
}
