#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c,d,e, total, avrg;
    float per;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a+b+c+d+e;
    avrg = total/5;
    //per = (total*100)/500;
    per = ((float)total/500)*100;
    

    printf("Total =  %d\n", total);

    printf("Average =  %d\n", avrg);
    
    printf("Percentage =  %.2f\n", per);

    return 0;
}