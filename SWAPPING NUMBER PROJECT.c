#include<stdio.h>
int main()
{
   int a,b;
   printf("enter the value of a:");
   scanf("%d",&a);
   printf("enter the value of b:");
   scanf("%d",b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swapping the value of a:%d,and the value of b:&d\n",a,b);
   return 0;
};
