#include <stdio.h>

int main()
{
    // Store the day in array arr[]
    int arr[12] = { 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31 };
  
    // Input Month
    int N = 4;
  
    // Print the number of days in
    // month 4
    printf("%d Days.", arr[N - 1]);
  
    return 0;
}
