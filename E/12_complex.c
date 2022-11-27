/**
 * C program to swap first and last digit of a number
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    /* Input a number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Find last digit */
    lastDigit  = num % 10; 

    /* Total number of digit - 1 */
    digits     = (int) log10(num); 

    /* Find first digit */
    firstDigit = (int) (num / pow(10, digits));

    swappedNum  = lastDigit;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += num % ((int)round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d", num);
    printf("Number after swapping first and last digit: %d", swappedNum);

    return 0;
}