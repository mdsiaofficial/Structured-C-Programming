#include <stdio.h>
int main( )
{
    int a,b,c,n;
    
    scanf ("%d",&n);
    a=n/100;
    b=((n%100)/10);
    c=n%10;
    
    int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    int min=(a<b)?((a<c)?a:c):((b<c)?b:c);
    
    printf("Max = %d and Min = %d", max, min);
    return 0;
}