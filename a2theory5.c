#include <stdio.h>
int main(){
int n;
printf("Enter the number of elements present in an array!\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array!\n");
for (int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("\nHorizontal Histogram!\n");
for (int j=0;j<n;j++){
  printf("\nValue %d:",j+1);
for(int i=0;i<arr[j];i++){
 printf("*");
}
}
int max=arr[0];
for(int i=0;i<n;i++){
    if(max<arr[i])
    max=arr[i];
}
printf("\nVertical Histogram!\n");
int spaces=1;
int k=n;
while(k>0){
 spaces=max-arr[n-k];
while(spaces>0){
    printf(" \n");
    spaces--;
}
   for (int i=0;i<arr[n-k];i++){
        printf("*\n");
    }
    printf("%d",arr[n-k]);
    printf("\n--\n");
    k--;
}
return 0;
}
