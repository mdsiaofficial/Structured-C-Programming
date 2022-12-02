#include <stdio.h>
int main()
{

    long long number;
    scanf("%lld", &number);

    long long n[10];
    for(int i = 0; i<10; i++){
        n[i]=0;
    }
    
    int last;
    while (number!=0)
    {

        last=number%10;
        n[last]++;
        number=number/10;
        
    }
    
    for(int i=0; i<10; i++){
        printf("Frequency of %d = %d\n", i, n[i]);

    }
    return 0;
}