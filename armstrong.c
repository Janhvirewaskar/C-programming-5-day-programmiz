#include <stdio.h>
 int main() {
int  n,r,sum=0,cube,temp;
printf("enter");
scanf("%d",&n);
temp=n;
while(n>0){
	r=n%10;
	cube=r*r*r;
	sum=sum+cube;
	n=n/10;
}
n=temp;
if(n==sum)
printf("armstrong");
else
printf("no");
return 0;
}