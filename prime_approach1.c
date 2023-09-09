#include<stdio.h>
int main(){
int num;
int k;
int flag = 1;

printf("Enter the number you to check for prime number\n");
scanf("%d",&num);



for(int i=2; i<num-1;i++){


  if(k%i==0){
  flag =1;
  break;     
  }
  
  if(flag==1){
  printf("The number is not prime");
  }
  else {
  printf("The number here is prime number");

}




}

