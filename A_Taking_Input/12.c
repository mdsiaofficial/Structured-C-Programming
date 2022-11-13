#include <stdio.h>
#include <math.h>
int main(){

    float a, area;
    
    printf("Enter the value: ");
    
    scanf("%f", &a);
    
    //area= sqrt(a);
    
    area = (sqrt(3)/4)*pow(a,2);
    
    printf("%.2f", area);
    
    return 0;
}