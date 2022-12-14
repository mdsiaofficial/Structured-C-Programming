#include<stdio.h>
int main()
{   
    int n;
    scanf("%d", &n);

    if(n==1){
        printf("Saturday");
    }else if(n==2){
        printf("Sunday");
    }else if(n==3){
        printf("Monday");
    }else if(n==4){
        printf("Tuesday");
    }else if(n==5){
        printf("Wednesday");
    }else if(n==6){
        printf("Thursday");
    }else if(n==7){
        printf("Friday");
    }else{
        printf("Invalid Input");
    }

    return 0;
}