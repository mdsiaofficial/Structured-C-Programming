#include <stdio.h>

int main()
{

    char jar;
    scanf("%c", &jar);

    while (jar<='z')
    {
        printf("%c ", jar);
        jar++;
    }
    
    printf("\n\n\n");

    for(char i = jar; i<='z'; i++){
        printf("%c ", i);
    }
    return 0;
}