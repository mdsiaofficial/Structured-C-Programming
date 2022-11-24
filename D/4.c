#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    switch(a>b)
    {   
        case a:
            printf("%d is maximum.", a);
            break;
        
        case b:
            printf("%d is maximum.", b);

        default: 
            printf("Invalid input!");
    }

    return 0;
}