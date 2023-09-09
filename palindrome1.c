// To check the number is palindrome
#include<stdio.h>
int main(){
int r,n,temp,sum=0;                // Declare the variables
printf("Enter the number\n");
scanf("%d",&n);
temp = n;

while(n>0)
{
r = n%10;
sum = (sum*10) + r;
n = n/10;
printf("THe reversed number is %d\n" , sum);
}
if(temp==sum)
{
printf("The number is palindrome\n");
}
else{
printf("The numbr is not palindrome\n");
}
return 0;
}

