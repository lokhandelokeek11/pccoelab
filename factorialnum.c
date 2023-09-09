// TO CALCULATE THE FACTORIAL OF A NUMBER 
#include <stdio.h>
int main(){
int num;
int factorial=1;
int i;
printf("Enter a number\n");
scanf("%d",&num);
for(i=1;i<=num;i++){
factorial=factorial*i;

//i=i+1;
}
printf("Factorial is %d",factorial);
return 0;
}
