#include <stdio.h>

int main() {
    int rows, cols;

    // Get the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrices
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Get the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Get the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Choose the operation to perform
    int choice;
    printf("Choose the operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch (choice) {
        case 1: // Addition
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }
            break;
        case 2: // Subtraction
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }
            break;
        case 3: // Multiplication
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < cols; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Print the result matrix
    printf("The result matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
