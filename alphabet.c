#include <stdio.h>
#include<string.h>
int main() {
 char c;
 
   printf("enter any value");
   scanf("%d",&c);
   if(isalpha(c)){
   printf("%c is a alphabet",c);}
   else{
   printf("%c is not an alphabet",c);}
   return 0;
}