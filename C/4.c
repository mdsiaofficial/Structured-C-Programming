#include <stdio.h>
int main(){
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);

    if((x>='a' && x<='z') || (c>='A' && c<='Z')){
        printf("%c is an alphabet.", c);
    }else{
        printf("%c is not an alphabet.", c);
    }
    return 0;
}