#include <stdio.h>
#include <string.h>
int main()
{   
    char x[]={"this is may name"};
    char y[100];
    // strcpy() will copy string to 1st from 2nd parameter
    strcpy(y, x);
    printf("%s", y);
    
    return 0;
}