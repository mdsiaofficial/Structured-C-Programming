#include <stdio.h>
#include <math.h>
int main(){

    //int x = 5;
    char x = 'g';
    //scanf("%c", &x);

    //
    /*
    if((x>='a' && x<='z') || (x>='A' && x<='Z')){
        printf("This is an alphabet.");
    }else{
        printf("This is not an alphabet.");
    }
    */

    // ternary conditional
    ((x>='a' && x<='z') || (x>='A' && x<='Z')) ? printf("This is an alphabet.") : printf("This is not an alphabet.");

    
    return 0;
}