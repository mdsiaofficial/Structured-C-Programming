#include <stdio.h>
int main(){

    float centimeter, meter, kilo;
    printf("Enter the value: ");
    scanf("%f", &centimeter);

    meter = centimeter/100;
    kilo = centimeter/100000;

    printf("Meter: %.2f\nKilometer: %f", meter, kilo);

    return 0;
}