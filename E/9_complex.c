/**
 * C program to count number of digits in an integer without loop
 */

#include <stdio.h>
#include <math.h> /* Used for log10() */

int main()
{
    long long num;
    int count = 0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%lld", &num);

    /* Calculate total digits */
    count = (num == 0) ? 1  : (log10(num) + 1);

    printf("Total digits: %d", count);

    return 0;
}