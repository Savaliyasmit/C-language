#include<stdio.h>
#include<conio.h>

void main()
{
 
 int i,j;

 for(i=1;i<=10;i++)//row count
 {
    for(j=1;j<=5;j++)//colum count
    {   
        if (i%2==1)
        {
            printf(" %d ",i);       
        }
        
        
       
    }
        printf("\n");
 }
    
}