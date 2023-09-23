#include<stdio.h>
#include<math.h>

int main(){
	int rows;
	int cols;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	
	printf("Enter the number of coloumns: ");
	scanf("%d",&cols);
	
	int matrix1[rows][cols];
	int matrix2[rows][cols];
	int result[rows][cols];
	
	printf("Enter the value of matrix1\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}		
	printf("Enter the value of matrix2\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
        if(rows!=cols && cols!=rows){
        printf("Matrix operations not possible");
        int choice;
        printf("Enter the operator you want to perform\n");\
        printf("1.Addition\n");
        printf("2.Substraction\n");
        printf("3.Multiplication\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);
        
        switch (choice){
        case 1: 
        	
           
        	for(int i = 0;i<rows;i++){
        		for(int j = 0;j<cols;j++){
        			result[i][j] = matrix1[i][j] + matrix2[i][j];
        		}
     	            }
     	        for(int i = 0;i<rows;i++){
        		for(int j = 0;j<cols;j++){
        			printf("%d ",result[i][j]);
        		}
        		printf("\n");
     	            }
// Digonal Addtion
		
		int digonalAddition = 0;
			for (int i = 0; i<rows; i++){
 				 for (int j = 0; j<cols; j++){
    					result[i][j] = matrix1[i][j] + matrix2[i][j];
   						 if(i==j){
   						   digonalAddition += result[i][j];
   				 }
 			 }
		}
		
		int secondDigonalAddition = 0;
		for (int i = 0; i < rows; i++) {
 			 for (int j = cols - 1 - i; j >= 0; j--) {
  				  secondDigonalAddition += result[i][j];
  			}
		}
printf("Second diagonal addition: %d\n", secondDigonalAddition);
printf("Diagonal addition: %d\n", digonalAddition);
   
     	case 2: 
     		for(int i = 0;i<rows;i++){
        		for(int j = 0;j<cols;j++){
        			result[i][j] = matrix1[i][j] - matrix2[i][j];
        		}
     	}
     	 for(int i = 0;i<rows;i++){
        		for(int j = 0;j<cols;j++){
        			printf("%d ",result[i][j]);
        		}
        		printf("\n");
     	            }
        break;
        case 3: 
        	for(int i = 0;i<rows;i++){
        		for(int j = 0;j<cols;j++){
        			result[i][j] = matrix1[i][j] * matrix2[i][j];
        		}
     	}
        for(int i = 0;i<rows;i++){
        		for(int j = 0;j<cols;j++){
        			printf("%d ",result[i][j]);
        		}
        		printf("\n");
     	            }	            
     	            
        return 0;
  }   
  }
  }
     
        
