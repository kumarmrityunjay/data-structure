#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
 int i;
 char str1[10],str2[10],str3[10];
 printf("Enter the 1st string:\n");
 scanf("%s",&str1);
 printf("Enter the 2nd string:\n");
 scanf("%s",&str2);
 printf("Enter the 3rd string:\n");
 scanf("%s",str3);
 
 for(i=0;i<strlen(str1);i++){
    if(str1[i]=='a' || str1[i]=='e'|| str1[i]=='i'|| str1[i]=='o'|| str1[i]=='u'|| str1[i]=='A'
    || str1[i]=='E'|| str1[i]=='I'|| str1[i]=='O'|| str1[i]=='U')
    str1[i]='*';
    else{
    	str1[i]=str1[i];
	}
    }

    for(i=0;i<strlen(str2);i++){
    if(str2[i]=='a'|| str2[i]=='e'|| str2[i]=='i'|| str2[i]=='o'|| str2[i]=='u'|| str2[i]=='A'
    || str2[i]=='E'|| str2[i]=='I'|| str2[i]=='O'|| str2[i]=='U')
     str2[i]=str2[i];
    else{
       str2[i]='@';
       }
    }
    for(i=0;i<strlen(str3);i++){
     str3[i]=toupper(str3[i]);
    }
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",str3);
    printf("%s%s%s",str1,str2,str3);
 }
