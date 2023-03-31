#include<stdio.h>
  
int main()
{
    int angle1, angle2, angle3, Sum;
    printf("\n Please Enter Three Angles of a Triangle : ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
     
    Sum = angle1 + angle2 + angle3;
     
    if(Sum == 180)
    {
        printf("\n This is a Valid Triangle");
    }
    else
    {
        printf("\n This is an Invalid Triangle");
    }  
    return 0;
 }
