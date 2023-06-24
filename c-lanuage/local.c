#include<stdio.h>

int sub(int m,int s,int e,int total,float per)
{
	
 printf("m\ts\te\ttotal\tper\n");
 printf("%d\t%d\t%d\t%d\t%.2f\n",m,s,e,total,per);
	
	
}
int calc(int m,int s,int e)
{  
    int total;
	float per;
  total=m+s+e;
  per=(float)total/3;
  sub(m,s,e,total,per);  
}
int main()
{
	int m,s,e;
printf("entre maths marks:");
scanf("%d",&m);	
printf("entre stat marks:");
scanf("%d",&s);	
printf("entre english marks:");
scanf("%d",&e);
calc(m,s,e);	
}
