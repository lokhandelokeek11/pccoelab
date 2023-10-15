#include<stdio.h>
int i;
int main(){
    int n;
// To take the input from user for the elemts of array
    printf("Enter the no of elements of array : \n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The original array is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }

// The main code for selection sort    
    for ( i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("\nThe sorted array is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}

    
    
    




