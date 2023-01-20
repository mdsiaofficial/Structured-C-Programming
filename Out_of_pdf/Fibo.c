#include <stdio.h>

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   }else if(n == 1) {
      return 1;
   }else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibbonacci series: " , n);
        
    for(int i = 0;i<n;i++) {
        printf("%d ",fibbonacci(i));            
    }
    return 0;
}