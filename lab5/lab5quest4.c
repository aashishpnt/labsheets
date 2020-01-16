#include<stdio.h>
void main()
{
    int a,b,c,d,n;
    printf("Enter a number:");
    scanf("%d",&a);
    n=a;
    while (a!=0)
    {
        c=a%10;
        d=(d*10)+c;
        a=a/10;
    }
    if (d==n){
        printf("the number is palindrome ");
    }
     else {
        printf("the number is not palindrome ");
     }

}
