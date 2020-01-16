#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,y,i;
    printf("Enter a number x:");
    scanf("%d",&x);
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y= y+ pow(x,i);
    }
    printf("%d",y);


}
