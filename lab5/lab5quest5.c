#include<stdio.h>
void main()
{
    int a,b,c,d,i;
    printf("Enter a number:");
    scanf("%d",&a);

    for(i=a;i!=0;)
    {
        c=i%10;
        d=d+c;
        i=i/10;
    }
printf("%d",d);
}

