#include<stdio.h>

int money(int c);

int main()
{
int cash;
printf("entre your money");
scanf("%d",&cash);
money(cash);
}
int money(int c)
{
int note[]={2000,500,200,100,75,50,20,10,5,2,1},n;

for(int i=0;i<12;i++)
{
n=c/note[i];
if(n!=0)
{
printf("\n %d your notes is:%d",note[i],n);
c=c%note[i];

}

}

}

