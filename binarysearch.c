#include<stdio.h>
 int binary(int arr[], int size, int target){
	int left = 0;
	int right = size - 1;
	
	while(left<=right){
	int mid = (left+right) / 2;
	
	if(arr[mid] == target){
		return mid;	
	}
	if(arr[mid] < target){
	 	left = mid + 1;  //target value is in righ half
	 }
	 else{
	 	left = mid - 1; // target value is in left half
	 }
}
return -1; //element not found
}
int main(){
	int size;
	printf("Enter the size of array\n");
	scanf("%d", &size);
	int i;
	int arr[size];
	printf("Enter %d values in ascending order\n",size	);  
	
	for(int i=0;i<size;i++){
               scanf("%d", &arr[i]);
              }
         int target;
         printf("Eneter the element you want to search for :");
         scanf("%d",&target);
         int result = binary(arr, size,target);
         
         if (result != -1){
          	printf("Element found at index %d\n",result);
          }
          else{
          printf("Element not found in index");
          }
          return 0;
          }
