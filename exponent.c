#include <stdio.h>
int main() {
long  result=1;
int base,expo;
printf("enter base and expo");
scanf("%d %d",&base,&expo);
while(expo!=0){
	result*=base;
	expo--;
}

printf("result=%lld",result);
 return 0;
}