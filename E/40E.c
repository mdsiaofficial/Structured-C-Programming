#include <stdio.h>

int main()
{
    int n=26;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c ",i+64);
        }
        
        printf("\n");
    }
    
    return 0;
}
