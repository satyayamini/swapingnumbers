#include <stdio.h>
#include<stdlib.h>

int main()
{
   int a,b;
   printf("a=20,b=30\n");
   scanf("%d%d,&a,&b);
   printf("before swaping a = %d and b = %d\n",a,b);
   a = a+b;
   b = a-b;
   a = a-b;
   printf9"after swapping a=%d and b=%d",a,b);
   return 0;
 }
