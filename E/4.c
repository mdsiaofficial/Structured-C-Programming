#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i<=n; i++){

        if(i%2!=0){
            sum += i;
        }
    }
    printf("Sum of odd numbers till N: %d", sum);
    return 0;
}