#include<stdio.h>
int main()
{
	char op;
	double a,b,result;
	
	printf("enter op");
	scanf("%c",&op);
	printf("enter a,b");
	scanf("%1lf %1lf",&a,&b);
	switch(op)
	{
		case '+':
			printf("%.1lf=%.1lf+%.1lf",a,b,a+b);
			break;
		case '-':
			printf("%.1lf=%.1lf-%.1lf",a,b,a-b);
			break;
		case '*':
			printf("%.1lf=%.1lf*%.1lf",a,b,a*b);
			break;
		case '/':
			printf("%.1lf=%.1lf/%.1lf",a,b,a/b);
			break;
		default:
			printf("operator is not existed");
		}
		return 0;
}