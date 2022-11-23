#include <stdio.h>  
   
int main()  {

    int x;
    printf("Enter the number to find Even or Odd");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("Even") : printf("Odd");

    return 0;  
}