#include<stdio.h>
int main()
{
	int i,a;
	printf("enter");
	scanf("%d",&a);
	printf("factors of %d is %d",a,i);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		printf("%d\n",i);
	}
	return 0;
}