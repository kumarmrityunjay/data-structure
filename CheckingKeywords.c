#include<stdio.h>
#include<string.h>
int main(){
        char str[20];
        printf("Enter the word:\n");
        scanf("%s",&str);
        printf("%s\n",str);
     //   printf("%d if string is same",((strcmp(str,"mohit")) && (strcmp(str,"ramu"))) );
        if((strcmp(str,"break")) && (strcmp( str,"for")) && (strcmp(str,"continue")) && (strcmp(str,"switch")) && (strcmp(str,"case"))
           && (strcmp(str,"default")) && (strcmp(str,"defer")) && (strcmp(str,"else")) && (strcmp(str,"func")) &&(strcmp(str,"goto"))&&
           (strcmp(str,"if")) && (strcmp(str,"map")) && (strcmp(str,"range")) && (strcmp(str,"return")) && (strcmp(str,"type")) &&
           (strcmp(str,"struct")) && (strcmp(str,"var")))
           printf("%s is a key not  a word.\n",str);
        else{
           printf("%s is  a key word.\n",str);
            }

 return(0);
 }
