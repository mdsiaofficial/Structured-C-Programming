#include <stdio.h>
float NewArr(float narr[]){
    float s=0;
    for(int i=0; i<sizeof(narr); i++){
        s=s+narr[i];
    }
    float x=sizeof(narr)-1;
    float avrg=s/x;
    return avrg;
}
int main()
{
    float arr[7]={3.4,9.5,2.6,6.5,8.9,3.6,4.7};
    printf("%.2f\n", NewArr(arr));
    return 0;
}
