#include <stdio.h>

/* Function declaration */
unsigned long long factorial(int num)
{
    if(num == 0){
        return 1;
    }else{
        return num * factorial(num - 1);
    }
}

int main()
{
    int num;
    unsigned long long f;
    printf("Enter any number: ");
    scanf("%d", &num);

    f = factorial(num); // Call factorial function
    printf("Factorial of %d is %llu", num, f);

    return 0;
}