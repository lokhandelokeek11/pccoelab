#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 int number;
 int guessednumber;
 int noofguesses=1;
 srand(time(0));
 number = rand() %100+1;
 // printf("The Guessed number is %d\n");
 
 printf("GAME STARTS\n");
 
 do {
     printf("Enter the number between 1 to 100\n");
     scanf("%d",&guessednumber);
     if(guessednumber<number){
      printf("Pls!! Enter the higher number\n");
     }
     else if (guessednumber>number){
     printf("Pls Enter the lower number\n");
     }
     else {
     printf("You guessed the right number in %d attempts\n",noofguesses);
     }
     noofguesses++;
 }
 while(noofguesses!=number);
return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

