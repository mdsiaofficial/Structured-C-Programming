#include <stdio.h>

int main()
{
    //int a = 0 ;

    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("%d ", i);
        //printf("Hello World!");
    }
    
    printf("\n\n");

    for(int i=a; i>0; i--){
        printf("%d ", i);

    }






    return 0;
}