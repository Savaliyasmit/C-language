


#include <stdio.h>
#include<conio.h>
void main()
{
    int count = 0;
    for (int i = 0; i < 5; i++) 
    {

        for (int j = 0; j < 5; j++) 
        {
            printf("%c ", 65 + count);
            
            count = count + 1;
        }

        printf("\n");
    }


    
}