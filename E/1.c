#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

/*     for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
 */

    n++;
    while (n--)
    {
        printf("%d\n", n);
    }
    
    return 0;
}