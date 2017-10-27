#include <stdio.h>

int main()
{

   int a, b, s, d, p, q;
   printf("The program gets two integers, and computes\n");
   printf("their sum, difference, product and quotient.\n");
   printf("The first number:");
   scanf("%d",&a);
   printf("The second number:");
   scanf("%d",&b);
   printf("Results are as follows:");
   s= a+ b;
   printf("%d+%d=%d\n",a,b,s);
   d= a- b;
   printf("%d-%d=%d\n",a,b,d);
   p= a* b;
   printf("%d*%d=%d\n",a,b,p);
   q= a/ b;
   printf("%d/%d=%d\n",a,b,q);

   return 0;
}

