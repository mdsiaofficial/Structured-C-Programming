#include <stdio.h>
#include <math.h>
int main(){
    char f;
    scanf("%c", &f);

    if((f>='a' && f<='z') || (f>='A' && f<='Z')){
        printf("%c is an Alphabet", f);
    }else{
        printf("%c is not an Alphabet", f);
    }

    return 0;
}