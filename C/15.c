#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total, average, percentage;
    char grade;

    printf("Enter the marks of five subjects::\n");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    if (average >= 90){
        grade = 'A';
    }else if (average >= 80 && average < 90){
        grade = 'B';
    }else if (average >= 70 && average < 80){
        grade = 'C';
    }else if (average >= 60 && average < 70){
        grade = 'D';
    }else{
        grade = 'E';
    }

    printf("\nThe Total marks is:  \t%.2f / 500.00\n", total);
    printf("\nThe Average marks is:\t%.2f\n", average);
    printf("\nThe Percentage is:   \t%.2f%%\n", percentage);
    printf("\nThe Grade is:        \t'%c'\n", grade);
    //
    //
    //
    //
    return 0;
}