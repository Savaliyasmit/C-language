#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{


    char a[20],temp;
    int i,l;
    printf("entre string:-");
    gets(a);

    i=0;
    l=strlen(a)-1;
    while (i<l)
    {
        temp=a[i];
        a[i]=a[l];
        a[l]=temp;
        l--;
        i++;
    }
    puts(a);
    
}