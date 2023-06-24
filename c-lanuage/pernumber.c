#include<stdio.h>
 int perfact(int a)
 {
	int i,num=0;

   for(i=1;i<a;i++)
   {
	   if(a%i==0)
	   {
		   num=num+i;
		   printf(" %d ",i);
	   }
   }	
   
   printf(": %d ",num);
   if(a==num)printf("\n This tha perfact Number is : %d ",num);
   else printf("\n This tha not perfact Number is : %d ",num);
   
 }
 
 int main ()
 {
	int a;
	printf(" Enter a Number : ");
	scanf("%d",&a);
	perfact(a);
	
 }