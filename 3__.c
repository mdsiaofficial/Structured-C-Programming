#include <stdio.h>
#include <math.h>
int main(){

    int tk[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    
    int a, f;

    printf("Enter the amount: ");
    scanf("%d", &a);

    f=a;

    for(int i=0; i<9; i++){

        int y = f/tk[i];
        printf("%d tk note is = %d\n", tk[i], y);
        f = f%tk[i];

    }

    return 0;
}

