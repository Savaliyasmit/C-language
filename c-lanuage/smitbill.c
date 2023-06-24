#include<stdio.h>

int main()

{
    int product[5],price[5]= {700,100,5500,11000,8000} ;  //= {100,100,40,30,80}
    
    int i,Amt[5],disc_A[5],total,g_total=0,Bill_Amt[5],T_Amt=0; 

    float gst[5],disc[5];



    for(i=0;i<5;i++)
    {
	if(i==0){
      printf("\n[%d] Enter Keybord ",i);
    }
    else if(i==1){
      printf("\n[%d] Enter Mouse ",i);
    }
    else if(i==2){
       printf("\n[%d] Enter Moniter",i);
    }
    else if (i==3){
      printf("\n[%d] Enter Pro  ",i);
    }
    else if(i==4)
    {
      printf("\n[%d] Enter RAM ",i);
    }
	   printf("Qty  : ");
	   scanf("%d",&product[i]);
    }

     for (i=0;i<5;i++)
     {
        Amt[i]=(price[i]*product[i]);
        disc[i]=Amt[i]*0.10;
        disc_A[i]=Amt[i]-disc[i];
        total+=disc_A[i];
        gst[i]=disc_A[i]*0.18;
        g_total+=gst[i];
        Bill_Amt[i]=disc_A[i]+gst[i];
        T_Amt+=Bill_Amt[i];
     }

      printf("\n");
      printf("Product ");
      printf("   Price   ");
      printf("\t");
      printf(" Qty ");
      printf("\t");
      printf(" Amt ");
      printf("\t");
      printf("\t");
      printf("   Disc   ");
      printf("\t");
      printf("Disc_Amt");
      printf("\t ");
      printf("   Gst   ");
      printf("\t");
      printf("Bill_Amt");
      printf("\t");

    for ( i=0;i<5; i++)
    {

    if(i==0){
      printf("\n[%d]Keybord ",i);
    }
    else if(i==1){
      printf("\n[%d]Mouse   ",i);
    }
    else if(i==2){
       printf("\n[%d]Moniter ",i);
    }
    else if (i==3){
      printf("\n[%d]Pro     ",i);
    }
    else if(i==4)
    {
      printf("\n[%d]RAM     ",i);
    }
    
      printf(" %d ",price[i]);
      printf("\t");
      printf(" %d ",product[i]);
      printf("\t");
      printf(" %d  ",Amt[i]);
      printf("\t");
      printf(" %f ",disc[i]);
      printf("\t");
      printf(" %d      ",disc_A[i]);
      printf("\t");
      printf(" %f ",gst[i]);
      printf("\t ");
      printf(" %d ",Bill_Amt[i]);
      printf("\t");

    }
     
    printf("\n");
    printf("Total ");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");

    printf(" %d ",total);

    printf("\t");

    printf("  %d ",g_total);

    printf("\t");

    printf("  %d ",T_Amt);

    printf("\t");

}