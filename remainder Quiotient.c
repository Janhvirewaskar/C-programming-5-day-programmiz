#include <stdio.h>
int main() {
	int a,b,remain,quot;
	printf("enter value");
	scanf("%d %d",&a,&b);
	quot=a/b;
	remain=a%b;
	printf("answer=%d",remain);
	printf("quot=%d",quot);
   return 0;
}