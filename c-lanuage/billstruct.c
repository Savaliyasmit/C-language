#include<stdio.h>

struct bill
{
    int qut,amt;
    float  dic ;   //5%
    float  gst ;   //18%
    int billamt,netbill;
};

int main()
{
    struct bill a[5];
	int rate=50;

     int i;

    for(i=0;i<2;i++)
    {
        printf("[%d]Enter a Qut : ",i);
        scanf("%d",&a[i].qut);
    }

    for(i=0;i<2;i++)
    {
      a[i].amt = rate*a[i].qut;
      a[i].dic = (a[i].amt*5)/100;
      a[i].billamt = a[i].amt-a[i].dic;
      a[i].gst = (a[i].billamt*18)/100;
      a[i].netbill = a[i].billamt+a[i].gst;
    }

    printf("\nNo\tRate\tQut\tAmt\tDic\tBillAmt\tGst\tNetBill");

    for (i = 0; i < 2; i++)
    {
        printf("\n[%d]\t%d\t%d\t%d\t%2.f\t%d\t%2.f\t%d",i,rate,a[i].qut,a[i].amt,a[i].dic,a[i].billamt,a[i].gst,a[i].netbill);
    }
    
    
}