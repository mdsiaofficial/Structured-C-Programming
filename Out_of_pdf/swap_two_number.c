#include <stdio.h>

int main()
{   
    int a,b;
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nNow swap: A= %d and B= %d\n",a,b);
    
    return 0;
}