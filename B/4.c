#include <stdio.h>
#include <math.h>
int main(){

    //int x = 5;
    char x = 'g';

    /*
    if((x>='a' && x<='z') || (x>='A' && x<='Z')){
        printf("This is an alphabet.");
    }else{
        printf("This is not an alphabet.");
    }
    */

    // ternary conditional
    ((x>='a' && x<='z') || (x>='A' && x<='Z')) ? printf("This is an alphabet.") : printf("This is not an alphabet.");

    //(year % 400 == 0 && year % 4 == 0) ? printf("%d Leap Year", year) : printf("%d Not Leap Year", year);
    return 0;
}