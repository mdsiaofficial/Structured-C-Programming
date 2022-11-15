#include <stdio.h>
#include <math.h>
int main(){

    int x,y;
    int p;
    printf("Enter the values: ");

    scanf("%d %d", &x, &y);
	
	p=pow(x,y);

    printf("%d\n", p);
    
    return 0;
}