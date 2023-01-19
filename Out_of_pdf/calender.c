#include<stdio.h>
#include<stdbool.h>

int GetFirstDayOfTheYear(int year){
    int firstDay = (year*365 +((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
    return firstDay;
}


int main(){
    char *month[]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

    int weekDay=0;

    int year;
    printf("Enter any year: ");
    scanf("%d", &year);

    printf("-----Welcome to the year %d-----",year);
    bool isLeapYear;
    if((year%400==0) || ((year%4==0) && (year%100!=0))){
        isLeapYear=true;
        //printf("%d Leap year.", year);
    }else{
        isLeapYear=false;
        //printf("%d Not Leap year.", year);
    }
    if(isLeapYear){
        daysInMonth[1]=29;
    }

    int onOrof;
    printf("\npress 1 to start the calendar");
    printf("\npress 0 to start the calendar\n");
    scanf("%d", &onOrof);

    if(onOrof==1){
        weekDay=GetFirstDayOfTheYear(year);
        for(int i=0; i<12; i++){
            printf("\n----------%s----------\n", month[i]);
            
            printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat  \n");

            int sc = 0 ;
            for(sc=0; sc<=weekDay; sc++){
                printf(" ");
            }
            
            //Days
            int totalDays=daysInMonth[i];
            for(int j=1; j<=totalDays; j++)
            {
                printf("%5d",j);
                weekDay++;
                if(weekDay==7)
                {
                    printf("\n");
                    weekDay=0;
                }
            }
            printf("\n\n");

        }

    }
    else if(onOrof==0)
    {
        printf("Calendar stopped\n");

    }
    else
    {
        printf("you press the wrong key.please press again.\n");
        printf("press 1 To start the calendar\n");
        printf("Or press 0 To Exit the calendar: \n");

        scanf("%d",&onOrof);
    }



    return 0;

}