#include <stdio.h>
int main() {
 long long n;
 int count;
 printf("enter integer");
 scanf("%lld",&n);
do{
	n=n/10;
	count++;
}
while(n!=0);
printf("count=%d",count);
   return 0;
}