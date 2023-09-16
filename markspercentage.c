// Lokeek Kishor Lokhande - 180 - L
#include<stdio.h>
#include<math.h>
int main(){

char choice = 'y';
while(choice=='y')
{
double phy, chem, bio,eng, math,sum ;
float percentage;
printf("ENTER THE MARKS IN PHYSICS\n");
scanf("%lf" , &phy);

	if(phy >= 0 && phy <= 100){
// printf("The input is valid");
}

	else{
	printf("Input is invalid\n");
	printf("Pls enter the valid number between 0 to 100\n");
	scanf("%lf",&phy);
}

printf("ENTER THE MARKS IN CHEMISTRY\n");
scanf("%lf" , &chem);

	if(chem >= 0 && chem <= 100){
// printf("The input is valid");
	}
	else{
	printf("Input is invalid\n");
	printf("Pls enter the valid number between 0 to 100\n");
	scanf("%lf",&chem);
	}


printf("ENTER THE MARKS IN BIOLOGY\n");
scanf("%lf" , &bio);

	if(bio >= 0 && bio <= 100){
	
// printf("The input is valid");
	}
	else{
	printf("Input is invalid\n");
	printf("Pls enter the valid number between 0 to 100\n");
	scanf("%lf",&phy);
	}

printf("ENTER THE MARKS IN ENGLISH\n");
scanf("%lf" , &eng);

	if(eng >= 0 && eng <= 100){
// printf("The input is valid");
}
	else{
	printf("Input is invalid\n");
	printf("Pls enter the valid number between 0 to 100\n");
	scanf("%lf",&eng);
	}	

printf("ENTER THE MARKS IN MATHS\n");
scanf("%lf" , &math);

	if(math >=0 && math <= 100){
// printf("The input is valid");
	}
	else{
	printf("Input is invalid\n");
	printf("Pls enter the valid number between 0 to 100\n");
	scanf("%lf",&math);
	}

sum = (phy + chem + bio + eng + math);
printf("The sum is %lf\n", sum);

percentage = ((phy + chem + bio + eng + math)/5);
printf("The percentage is %lf\n", percentage);

	if(percentage>=90){
 	 printf("Grade A \n");
	}
	else if(percentage>=80){
	printf("Grade B\n");
	}
	else if(percentage>=60){
	printf("Grade C\n");
	}
	else if(percentage>=40){
	printf("Failed\n");
	}
	printf("Do you have any entries to check the percentage of student ??");
	scanf("%hhd",&choice);
	}

	}


















