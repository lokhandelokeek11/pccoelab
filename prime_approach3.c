#include<stdio.h>
#include<stdlib.h>
int main(){
int k,i;
printf("Enter the number to be checked\n");
scanf("%d",&k);
for(i=2;i<=k;i++)
{
if(k%i<=k-1 ==0)
{
printf("The number is not prime\n");
exit(0);
}
}
printf("The number is prime\n");
return 0;
}
