#include <stdio.h>
int main() {
 //lcm find 16 and 4 lcm 4
 int lcm,n1,n2,max;
 printf("enter 2 no.");
 scanf("%d %d",&n1,&n2);
 if(n1>n2){
 	max=n1;
 }else
 max=n2;
 while(1){
 	if((max%n1==0 && max%n2==0))
    printf("lcm of %d n %d=%d",n1,n2,lcm); 
	break;}
    max++;
   return 0;
}