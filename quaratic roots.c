#include <stdio.h>
#include<math.h>
int main() {
 float r1,r2,a,b,c,dis;
 
   printf("enter any a,b,c");
   scanf("%f %f %f",&a,&b,&c);
   dis=b*b-4*a*c;
   if(dis>0){
   r1=-b+sqrt(dis)/2*a;
   r2=-b-sqrt(dis)/2*a;
   printf("R1=%f and R2=%f and they are real and different",r1,r2); }
   else if(dis==0){
   r1=-b/2*a;
   r2=-b/2*a;
   printf("r1=%f and R2=%f and they are real abd equal",r1,r2);}
   else{
   r1=-b/2*a-b+sqrt(dis)/2*a;
   r2=-b/2*a+b+sqrt(dis)/2*a;
   printf("r1=%f and r2=%f and they are not real",r1,r2);}
   return 0;
}