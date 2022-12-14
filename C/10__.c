#include<stdio.h>
int main()
{   
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if((a+b+c)==180){
        printf("The Triangle is Valid");
    }else{
        printf("The Triangle is Not Valid");
    }
    
    return 0;
}