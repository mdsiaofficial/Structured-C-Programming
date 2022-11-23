#include <stdio.h>  
   
int main()  {  
    int a, b, c, max, min; 
    printf("Enter Three Integers\n");  
    scanf("%d %d %d", &a, &b, &c);  
     
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    /* Print Maximum Number */ 
    printf("Maximum Number is = %d\n", max);  
    printf("Minimum Number is = %d\n", min);  
   
    return 0;  
}