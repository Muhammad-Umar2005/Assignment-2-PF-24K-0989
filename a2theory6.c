#include <stdio.h>

int main(){

    int n,p;
    printf("Enter the number of matchsticks:");
    scanf("%d",&n);
    if (n%5==0){
        p=-1;
    }
    for(int x=1;x<=4;x++){
        if((n-x)%5==0){
           p=x;
        }
    }
    if (p==-1){
        printf("A is impossible to guarantee a win.\n");
    } else {
        printf("A  pick %d matchsticks on the first move to guarantee a win.\n",p);
    }
    return 0;
}
