#include <stdio.h>

int main()
{
    int week;
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    
    switch(week)
    {
        case 3: 
            printf("Monday");
            break;
        case 4: 
            printf("Tuesday");
            break;
        case 5: 
            printf("Wednesday");
            break;
        case 6: 
            printf("Thursday");
            break;
        case 7: 
            printf("Friday");
            break;
        case 1: 
            printf("Saturday");
            break;
        case 2: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}