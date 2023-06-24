


#include <stdio.h>
#include<conio.h>
void main()
{
    int count = 0;
    for (int i = 0; i < 5; i++) 
    {

        for (int j = 0; j < 5; j++) 
        {
            printf("%d ",  count+11);
            
            count = count + 1;
        }
        count=count + 5;

        printf("\n");
    }


    
}