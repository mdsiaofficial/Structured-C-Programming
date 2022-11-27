/**
 * C program to all natural numbers in reverse from n to 1 using while loop
 */

#include <stdio.h>

int main()
{
    int n;

    /*
     * Input a number from user
     */
    printf("Enter value of n: ");
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}