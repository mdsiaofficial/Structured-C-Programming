#include <stdio.h>
// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    for(int i=1; i<n; i++){
        printf("%d, ", x);
        x=x+i;
    }
    return 0;
}