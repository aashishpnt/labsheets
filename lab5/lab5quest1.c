#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
 printf("Enter two integers ");
 scanf("%d%d",&a,&b);
 if (a>b)
 {
   if(a%2==0)
   {
       for (i=a-1;i>b;i=i-2){
       c=c+i;
       printf("+%d",i);
       }
   }
   if(a%2!=0)
   {
       for (i=a-2;i>b;i=i-2){
       c=c+i;
       printf("+%d",i);
       }
   }
 }
 else if (b>a)
 {
   if(b%2==0)
   {
       for (i=b-1;i>a;i=i-2){
       c=c+i;
       printf("+%d",i);
       }
   }
   if(b%2!=0)
   {
       for (i=b-2;i>a;i=i-2){
       c=c+i;
       printf("+%d",i);
       }
   }

 }

    printf("=%d",c);

}
