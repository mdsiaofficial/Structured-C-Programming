#include <stdio.h>
int main(){

    int L, B, peri, area;

    printf("Enter the value: ");
    scanf("%d %d", &L, &B);

    area = L*B;
    //peri = 2*(L+B);
    peri = L+B+L+B;
    printf("Perimeter: %d\nArea: %d", peri, area);
    return 0;
}