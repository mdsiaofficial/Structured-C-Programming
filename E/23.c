#include <stdio.h>
int main()
{

    int n, sum=0;
    
    printf("Enter n number: ");
    scanf("%d", &n);

    for(int i=7; i<=n; i+=13){
        
       sum=sum+i;
    }

    printf("Sum =  %d", sum);

    return 0;
}