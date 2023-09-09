#include <stdio.h>
int main(){
int num;
int n1 = 0;
int n2 = 1;
int n3,i;
printf("Enter a number : ");
scanf("%d",&num);
printf("The fibbonaci series : ");
for(i=2;i<num;i++){
n3 = n1 +n2;
n1=n2;
n2=n3;
printf("%d",n3);

}

return 0;
}
