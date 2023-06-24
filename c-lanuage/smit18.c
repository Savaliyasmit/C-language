
//area of circle
#include <stdio.h>

int
main ()
{
  float area , radius,ip = 3.14159265359,c;
  
 printf("\n entre area:");
 scanf("%f",&area);
 
 printf("\n entre radius:");
 scanf("%f",&radius);
  
  
  c=ip*radius*radius;
  
  printf("\narea of circle:%f",c);

  return 0;
}
