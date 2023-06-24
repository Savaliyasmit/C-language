//simple interst calculate
#include <stdio.h>

int main()
{
    int principal,rate,tim,interst;
    printf("principal:-");
    scanf("%d",&principal);
    
    
    printf("rate:-");
    scanf("%d",&rate);
    
    
    printf("tim:-");
    scanf("%d",&tim);
    
    
    
    interst=principal*rate*tim/100;
    printf("total interst=%d",interst);
    
    
    
  
    return 0;
}
