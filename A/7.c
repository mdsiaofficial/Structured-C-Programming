#include <stdio.h>
#include <math.h>

int main(){

    float fah;
    printf("Enter the value of Fahrenheit: ");
    scanf("%f", &fah);

    float cel = ((fah-32)*5)/9;

    printf("Celcius: %.3f", cel);

    return 0;
}