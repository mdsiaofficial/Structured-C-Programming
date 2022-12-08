#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(){

    double r, dia, circum, area;

    printf("Enter the value: ");
    scanf("%lf", &r);

    dia= 2*r;
    circum = 2*pi*r;
    area = pi*r*r;

    //area = pi*pow(r,2); 
// eivabe pow funtion use korle must 
// math.h header file use korte hobe

    printf("Diameter: %.2lf\nCircumference: %.2lf\nArea: %.2lf\n",dia, circum, area);

    return 0;
}