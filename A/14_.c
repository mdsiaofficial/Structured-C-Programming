#include <stdio.h>
#include <math.h>

int main(){

    float p, t, r, si, ci;

    scanf("%f %f %f", &p, &t, &r);

    si = p * t * (r/100); //simple interest

    float x = (1+(r/100));
    ci = p * (pow(x,t)-1); // compound interest

    //ci = p * (pow((1+(r/100)),t)-1)
    
    printf("Simple Interest: %.2f\nCompound Interest: %.2f", si, ci);
    
    return 0;
}