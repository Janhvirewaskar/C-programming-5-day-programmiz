#include <stdio.h>
int main() {
int  n,remain=0,rev;
printf("enter integer");
scanf("%d",&n);
while(n!=0){
	remain=n%10;
	rev=rev*10+remain;
	n=n/10;
	
}
printf("reverse=%d",rev);

 


   return 0;
}