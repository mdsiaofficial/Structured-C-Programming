#include <stdio.h>
#include <math.h>
int main(){

    int n;
    scanf("%d", &n);

    if(n>0){
        printf("%d is positive", n);
    }else if(n<0){
        printf("%d is negative", n);
    }else{
        printf("%d is zero", n);
    }


    return 0;
}




