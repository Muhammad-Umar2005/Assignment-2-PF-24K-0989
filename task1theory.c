#include<stdio.h>

int main() {
    int arr[5];
    printf("Enter the elements of array!\n");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
  for (int i=0;i<5;i++){
        printf("array element[%d]=%d\n",i+1,arr[i]);
    }
    int smallest=arr[0];
     int second_smallest=0;
  for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
           second_smallest = smallest;
           smallest = arr[i];
        }if (arr[i]<second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    
    printf("The second smallest number is %d",second_smallest);
    return 0;
}
