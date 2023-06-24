#include<stdio.h>

int main()
{
    int i,j,n,k=1;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            // Print the value
            printf(" %d",k);
 
            // Now Negate the value.
            k = !k;
        }
 
        printf("\n");
    }
 
    return 0;
}