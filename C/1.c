#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    if(n==0){
        printf("Zero\n");
    }else if(n>0){
        printf("Positive\n");
    }else{
        printf("Negative\n");
    }
    return 0;
}