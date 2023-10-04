#include <stdio.h>
int main() {
 int a,b,swap;
 
   printf("enter any two no.");
   scanf("%d %d",&a,&b);
   swap=a;
   a=b;
   b=swap;
   printf("answer=%d and %d",a,b);
   return 0;
}