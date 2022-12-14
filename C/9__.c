#include<stdio.h>
int main()
{
    int n;
    // int jan=31;
    // int feb=28;
    // int mar=31;
    // int apr=30;
    // int may=31;
    // int jun=30;
    // int jul=31;
    // int aug=31;
    // int sep=30;
    // int oct=31;
    // int nov=30;
    // int dec=31;

    scanf("%d", &n);

    if(n==1){
        printf("January = 31 days");
    }else if(n==2){
        printf("February = 28 days");
    }else if(n==3){
        printf("March = 31 days");
    }else if(n==4){
        printf("April = 30 days");
    }else if(n==5){
        printf("May = 31 days");
    }else if(n==6){
        printf("June = 30 days");
    }else if(n==7){
        printf("July = 31 days");
    }else if(n==8){
        printf("August = 31 days");
    }else if(n==9){
        printf("Septamber = 30 days");
    }else if(n==10){
        printf("October = 31 days");
    }else if(n==11){
        printf("November = 30 days");
    }else if(n==12){
        printf("December = 31 days");
    }else{
        printf("Invalid Input");
    }
    
    return 0;
}