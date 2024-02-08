


#include <stdio.h>

int main()
{
    int  i, j, k = 65;



    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
        {   
            if(k == 91){
                 break;
              }
              else{
                    printf(" %c ", k++);
              }
        }

        printf("\n");
    }

    return 0;
}