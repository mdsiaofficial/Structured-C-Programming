#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int num, j, c;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("%d is not a prime number \n", num);
    }
    c = 0;
    // To check prime number
    for (j = 2; j <= num / 2; j++)
    {
        if ((num % j) == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0){
        printf("%d is a prime number \n", num);
     }else{
        printf("%d is not a prime number \n", num);
    }

    return 0;
}
