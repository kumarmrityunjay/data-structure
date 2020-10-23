#include <stdio.h>

int main()
{
    int i,steps,r=0;
    int x=0,y=0;
    printf("Enter the no of steps:\n");
    scanf("%d",&steps);
    
    for(i=1;i<=steps;i++){
        if(i%5==1){
            x=x+i*10;
            
            
            
        }
        else if(i%5==2){
            y=(y+10*i);
            
        
            
        }
        else if(i%5==3){
            x=x-(i*10);
            
            
        }
        else if(i%5==4){
            y=y-(i*10);
            
        }
        else if(i%5==0){
            x=x+i*10;
        
            
        }
       
        
        }
    
    printf("%d\t%d",x,y);

    
}
