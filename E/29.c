#include <stdio.h>

int main()
{

    int a,b, gcd=1;
    
    scanf("%d%d", &a, &b);

    int min=(a<b)?a:b;

    for(int i=1; i<=min; i++){
    
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }

    
    int lcm = (a*b)/gcd;

    printf("LCM of %d and %d : %d\n", a,b,lcm);
    
    return 0;
}