#include <stdio.h>
int main() {
    int a=505;
    int *h=&a;
    //h=&a;
    printf("%x\n", h);
    printf("%d\n", *h);
    return 0;
}