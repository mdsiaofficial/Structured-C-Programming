#include <stdio.h>
int main(){
    int b, h;
    float area;

    printf("Enter the value: ");
    scanf("%d %d", &b, &h);

    area = (b*h)/2;
    //area = 0.5*b*h;

    printf("Area of a triangle: %.2f", area);
    
    return 0;
}