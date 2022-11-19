#include <stdio.h>
#include <math.h>
int main(){

    int n;
    scanf("%d", &n);

    if(n%5==0 && n%11==0){
        printf("Divible by 5 and 11\n");
    }else{
        printf("Not Divisible by 5 and 11\n");
    }
    



    //
    return 0;
}