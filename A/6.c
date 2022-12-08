#include <stdio.h>
#include <math.h>

int main(){

    float cel;
    printf("Enter the value of Celcius: ");
    scanf("%f", &cel);

    float farh = ((cel*9)/5)+32;

    printf("Fahrenheiht: %.3f", farh);

    return 0;
}