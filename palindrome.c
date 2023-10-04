#include <stdio.h>
int main() {
int  n,remain=0,rev,original;
printf("enter integer");
scanf("%d",&n);
original=n;
while(n!=0){
	remain=n%10;
	rev=rev*10+remain;
	n=n/10;
	}
	
if(original==rev)
printf("integer is palindrome=%d",rev);
else
printf("not a palindrome");
return 0;
}