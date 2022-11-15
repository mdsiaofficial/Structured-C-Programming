#include <stdio.h>
#include <math.h>
int main(){

    int a,b,c,d,e, total, avrg;
    float percentage;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    
    total=a+b+c+d+e;
    avrg=(a+b+c+d+e)/5;
    percentage = (total*100)/500;
    
    printf("%f", percentage);
    return 0;
}