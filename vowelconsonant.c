#include <stdio.h>
int main() {
 char a;
 
   printf("enter any char");
   scanf("%c",&a);
   if(a=='a'||a=='i'||a=='o'||a=='e'||a=='u'||a=='s')
   printf("%c is vowel",a);
   else
   printf("%c is consonant");
   return 0;
}