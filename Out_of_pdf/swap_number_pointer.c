#include <stdio.h>

int main()
{   
    int a,b;
    
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);
    
    int *p1=&a, *p2=&b;

    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    
    printf("Now swap: A= %d and B= %d\n",*p1,*p2);
    
    return 0;
}