#include<stdio.h>    // Include the standard I/O library
#include<stdbool.h>    // Include the bool library
//first day of the year    // first day of the year function
int getfirstDayofTheyear(int year)    // getFirstDayOfTheYear function
{
    int firstDay=(year*365+ ((year-1)/4 )-((year-1)/100)+((year-1)/400))%7;    // Calculate the first day
    return firstDay;    // return the first day of the year
};
int main()    // main function
{
    char *month[]= {"January","February","March","April", "May", "June", "July", "August","September","October","November","December" };    // initialize month array
    int daysInMonth[]= {31,28,31,30,31,30,31,31,30,31,30,31};    // initialize daysInMonth array to store the number of days in each month
    int weekDay=0;    // initialize weekDay variable
    int year;    // initialize year variable
    printf("Enter any year: ");    // print message on console
    scanf("%d",&year);    // read year from user
// Welcome
    printf("-----Welcome To the Year %d-----\n",year);    // print message on console
//checking if the year is leap year or not
    int isLeapYear;    // initialize isLeapYear variable
    if(year%400==0)    // check if year is divisible by 400 or not
    {
        printf("------%d is a leap year-----\n",year);    // print message on console
        isLeapYear=true;    // set isLeapYear to true
    }
    else if(year%4==0&&year%100!=0)    // check if year is divisible by 4 and not divisible by 100
    {
        printf("------ %d is a leap year------\n",year);    // print message on console
        isLeapYear=true;    // set isLeapYear to true
    }

    else
    {
        printf("------ %d is not a leap year--------\n",year);    // print message on console
        isLeapYear=false;    // set isLeapYear to false
    }

    if(isLeapYear)    // check if isLeapYear is true
    {
        daysInMonth[1]=29;    // set the number of days in february to 29
    }

    int onOrof;    // initialize onOrof variable
    printf("press 1 To start the calendar\n");    // print message on console
    printf("press 0 To Exit the calendar: ");    // print message on console
    scanf("%d",&onOrof);    // read onOrof from user
    if(onOrof==1)    // check if user wants to start the calendar
    {
        //first day of the given year
        weekDay=getfirstDayofTheyear(year);    // set the weekDay variable to firstDayOfTheYear function
        for(int i=0; i<12; i++)    // loop through each month
        {
            //Month
            printf("\n----------------%s--------------",month[i]);    // print the month on console
            printf("\n");    // print new line
            //Weekdays
            printf("\n   Sun\tMon  Tue  Wed  Thu  Fri  Sat \n");    // print the weekdays on console
            //spaceCounter
            int spaceCounter=1;    // initialize spaceCounter variable
            for(spaceCounter=1; spaceCounter<=weekDay; spaceCounter++)    // loop through weekDay
            {
                printf("\0");    // print space on console
            }
            //Days
            int totalDays=daysInMonth[i];    // set the totalDays to the number of days in month
            for(int j=1; j<=totalDays; j++)    // loop through the days of month
            {
                printf("%5d",j);    // print the day on console
                weekDay++;    // increment the weekDay
                if(weekDay==7)    // check if weekDay is equal to 7 or not
                {
                    printf("\n");    // print new line
                    weekDay=0;    // set weekDay to 0
                }
            }
            printf("\n\n");    // print new line
        }
    }
    else if(onOrof==0)    // check if user wants to stop the calendar
    {
        printf("Calendar stopped\n");    // print message on console
    }
    else    // else body
    {
        printf("you press the wrong key.please press again.\n");    // print message on console
        printf("press 1 To start the calendar\n");    // print message on console
        printf("Or press 0 To Exit the calendar: \n");    // print message on console
        scanf("%d",&onOrof);    // read onOrof from user
    }
    return 0;    // return from main function
}
