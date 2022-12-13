#include <stdio.h>
#include <math.h>
int main(){

    char x;

    scanf("%c", &x);

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){

        printf("%c is a Vowel", x);
        
    }else if(x=='A' || x=='E' ||x=='I' || x=='O' || x=='U'){

        printf("%c is a Vowel", x);

    }else{

        printf("%c is a Consonant", x);
    }

    return 0;
}