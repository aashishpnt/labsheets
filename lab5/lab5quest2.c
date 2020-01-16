#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if (a>b){
    for (i=1 ;i<=a;i++)
    {
        if (a%i==0 && b%i==0)
        {
            printf("The HCF is %d \n",i);
            printf("The LCM is %d",(a*b)/i);
            i=a+1;
        }
    }
    }
     else if (a>b){
    for (i=1 ;i<=b;i++)
    {
        if (a%i==0 && b%i==0)
        {
            printf("The HCF is %d \n",i);
            printf("The LCM is %d",(a*b)/i);
            i=b+1;
        }
    }
    }
    else {
        printf(" Enter two different numbers");
    }

}
