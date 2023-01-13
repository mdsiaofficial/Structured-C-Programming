#include <stdio.h>
int main(){

    int n[10];
    int sum=0;

    for(int i=0; i<10; i++){
        scanf("%d", &n[i]);
    }

    for(int j=0; j<10; j++){
        sum = sum + n[j];
    }

    printf("Sum of the numbers: %d\n", sum);
    int avrg = sum/10;
    printf("Average of the numbers: %d", avrg);
    return 0;
}
