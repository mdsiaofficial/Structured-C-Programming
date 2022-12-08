#include <stdio.h>
#include <math.h>

int main(){

    int a;
    scanf("%d", &a);

    //double area = (sqrt(3)*pow(a,2))/4;
    double area = (sqrt(3)/4)*pow(a,2);

    printf("Area of an Equiletaral Triangle: %.3lf", area);

    return 0;
}