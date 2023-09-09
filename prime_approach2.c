#include<stdio.h>
int main(){
int i,k,flag;
printf("Enter the number which you think is prime\n");
scanf("%d",&k);
for(i=2;i<=k; i++)
{
   if(k%i==0){
   break;
   }
 }  
if(i>=k){
printf("The number is prime");
}
else

printf("The number is not prime");
return 0;



}
