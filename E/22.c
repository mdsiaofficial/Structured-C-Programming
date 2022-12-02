#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i<=n; i++){

        sum =sum + i;
        
    }
    printf("Sum of numbers till N: %d", sum);
    return 0;
}