#include <stdio.h>
#include <string.h>
int main()
{   
    char x[]={"babul"};
    char y[]={"babol"};
    // strcmp() will compare string and outpur as true-false(boolean)
    printf("%d", strcmp(x,y));
    
    return 0;
}