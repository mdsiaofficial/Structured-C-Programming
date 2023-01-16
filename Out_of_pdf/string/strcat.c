#include <stdio.h>
#include <string.h>
int main()
{   
    char x[]={"this is may name"};
    char y[]={" this is me."};
    // strcat() will merge string
    strcat(x,y);

    printf("%s", x);
    
    return 0;
}