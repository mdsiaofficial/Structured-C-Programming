#include <stdio.h>
#include <math.h>
int main(){

    char x;
    scanf("%c", &x);
    if(x>='0' && x<='9'){
        printf("%c is a Digit/Number", x);

    }else if((x>='a' && x<='z') || (x>='A' && x<='Z')){

        printf("%c is an Alphabet", x);
    }else{

        printf("%c is a Special Character", x);
    }


    return 0;
}