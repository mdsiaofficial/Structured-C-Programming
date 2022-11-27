/**
 * C program to find sum of first and last digit of a number
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum, digits, firstDigit, lastDigit;

    sum = 0;

    /* Input a number from user */
    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &num);
    
    /* Find last digit */
    lastDigit  = num % 10;


    /* Find total number of digits - 1 */
    digits    = (int) log10(num); 

    /* Find first digit */
    firstDigit = (int) (num / pow(10, digits)); 

    /* Calculate the sum */
    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d", sum);

    return 0;
}