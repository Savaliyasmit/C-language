#include <stdio.h>
 
int main()
{
   int x=50, y=60, *a, *b, temp;
 
 
   a = &x;
   b = &y;
 
   temp = *b; //60
   *b = *a;   //60=50
   *a = temp; // 50
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}