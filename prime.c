#include <stdio.h>
int main() {
int  n,flag=0,i;
printf("enter integer");
scanf("%d",&n);
if(n==0 || n==1)
flag=1;
for(i=2;i>=n/2;i++){
	if(n%10==0)
	flag=1;
}
if(flag==0)
{printf("%d is prime no.",n);
}
else
printf("%d is not prime no",n);

 


   return 0;
}