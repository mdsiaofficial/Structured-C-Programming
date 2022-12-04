#include <stdio.h>
#include <math.h>
int main(){

    double a, b, c, temp, r1, r2, img;
    scanf("%d %d %d", &a, &b, &c);

    temp = (b*b) - (4*a*c);

    switch (temp > 0)
    {
        case 1:
            r1= (-b + sqrt(temp))/(2*a);
            r2= (-b - sqrt(temp))/(2*a);
            printf("Root 1 = %.3lf and Root 2 = %.3lf", r1, r2);
            break;
        case 0:
            switch (temp < 0)
            {
                case 1:
                    //r1=r2=(-b /(2*a));
                    r1= (-b /(2*a));
                    r2= (-b /(2*a));
                    img= sqrt(-temp)/(2*a);
        
                    printf("Root 1 = %.3lf + i%.3lf and Root 2 = %.3lf + i%.3lf further imaginary number: %.3lf", r1, img, r2, img);

                    break;
                case 0:
                    //r1=r2=(-b /(2*a));
                    
                    r1= (-b /(2*a));
                    r2= (-b /(2*a));

                    printf("Root 1 = %.3lf and Root 2 = %.3lf", r1, r2);
                    break;

            }

    }



/* 
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

 */


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