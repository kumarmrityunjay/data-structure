#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


int main()
{  
    int sum=0;
    int l,i;
    char str[20];
    printf("Enter the number:\n");
    gets(str);
     l=strlen(str);
    for(i=0;i<l;i++)
    {
        if('0'<=str[i] && str[i]<='9')
        {
           sum=sum+(str[i]-48)*pow(17,l-(i+1));
            
        }
        if('A'<=toupper(str[i]) && toupper(str[i])<='G')
        {
           sum=sum+(toupper(str[i])-55)*pow(17,l-1-i);
          
        }

        
    }
    printf("%d",sum);
    
    

    return 0;
}
