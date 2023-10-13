#include<stdio.h>

int main(){
    int i,n,searchnum,found =0;

    printf("Enter the number of elements in the array : \n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elemets of array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements you want to search : \n");
    scanf("%d",&searchnum);

    for ( i = 0; i < n; i++)
    {
        if (arr[i] == searchnum)
        {
            printf("Element found at index : %d",i);
            break;
        }
    }
    if (i==n)
    {
        printf("Element not found!!!!");
    }
    
    
    return 0;
}