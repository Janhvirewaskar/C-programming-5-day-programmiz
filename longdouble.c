#include <stdio.h>
int main() {
   int i;
   float f;
   long l;
   long long g;
      double d;
      long double e;
   printf("int=%zu",sizeof(i));
   printf("\nfloat=%zu",sizeof(f));
    printf("\nlong=%zu",sizeof(l));
     printf("\nlong long=%zu",sizeof(g));
   printf("\ndouble=%zu",sizeof(d));
   printf("long double=%zu",sizeof(e));
  
   return 0;
}