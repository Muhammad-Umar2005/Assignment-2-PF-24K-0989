#include <stdio.h>
#include <string.h>
int main()
{
    int x=0,a=1;
    char arr[30];
    printf("Enter any slogan!\n");
    fgets(arr, 30, stdin);
    x=strlen(arr);
    x--;
    printf("%s={",arr);
    for(int i=0;i<x;i++){
    for(int j=i+1;j<x;j++){
     if(arr[i]==arr[j]){
       arr[j]=0;
       a++;}
    }
    if (arr[i]!=0){
    printf("'%c':%d,",arr[i],a);
 }
    a=1;
}
printf("}");
    return 0;
}
