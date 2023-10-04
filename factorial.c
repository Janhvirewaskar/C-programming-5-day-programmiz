#include <stdio.h>
int main() {
    int i,n;
	long long fact=1;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n<0)
    { printf("no factorial");
	}
	else{
	for(i=1;i<=n;i++){
	
    	fact*=i;
	}
}
	printf("fact of %d is=%llu",n,fact);

     return 0;
}