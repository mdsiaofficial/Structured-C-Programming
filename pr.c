#include <stdio.h>

void updateArray(int arr[]){
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
}
int main()
{
    int arr[5];
    int yrrr[] = {3,4,4,4,3,4,3,4,3,4};
    int jrrrr[11] = {4,5,6,7,8};
    jrrrr[8] = 34;

    /* for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    } */
    //updateArray(arr);

    int sum=0;
    for(int i=0; i<10; i++){
        sum = sum + yrrr[i];
    }
    int avrg = sum/10;
    printf(" %d %d", sum, avrg);
}
