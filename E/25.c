#include <stdio.h>

int main()
{

    int n, sum=0;
    
    printf("Enter n number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){

            sum = sum + j;
        }

    }


    int sum2 = (n*(n+1)*(2*n+4))/12;

    printf("Sum =  %d %d", sum, sum2);

    
    return 0;
}