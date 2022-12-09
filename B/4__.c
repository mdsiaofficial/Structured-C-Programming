#include <stdio.h>
#include <math.h>
int main(){

    char d;

    printf("Enter a character: ");

    scanf("%c", &d);

    ((d>='a' && d<='z') || (d>='A' && d<='Z')) ? printf("%c Character is Alphabet.", d) : printf("%c Character is Not Alphabet.", d);
    
    // ^
    return 0;
}