#include<stdio.h>
int main(){
   int a,b,temp;
   int *p1,*p2;
   printf("Enter two numbers:");
   scanf("%d %d",&a,&b);
   p1=&a;
   p2=&b;
   temp=*p1;
   *p1=*p2;
   *p2=temp;
   printf("After swapping the numbers are :");
   printf("a=%d b=%d",a,b);
   return 0;
}