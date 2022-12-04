#include <stdio.h>
int main(){

    int a,b;
    char x;
    scanf("%d %c %d", &a,&x,&b);

    switch (x)
    {
        case '+':
            printf("Sum of %d and %d = %d",a,b,(a+b));
            break;
        case '-':
            printf("Substraction of %d and %d = %d",a,b,(a-b));
            break;
        case '*':
            printf("Product of %d and %d = %d",a,b,(a*b));
            break;
        case '/':
            printf("Quotient of %d and %d = %d",a,b,(a/b));
            break;
        case '%':
            printf("Modulas of %d and %d = %d",a,b,(a%b));
            break;
        default:
            printf("Invalid Input");
            break;
    }




/* 
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
            break;
        
        default:
            printf("Consonant");
            break;
    }

 */

}