#include<stdio.h>
#include "../inc/test.h"
int add(int a,int b)
{
  return a+b;
}
int main()
{
   
   printf("2+3=%d\n",add(2,3));
   printf("5-4=%d\n",sub(5,4));
   return 0;
}


