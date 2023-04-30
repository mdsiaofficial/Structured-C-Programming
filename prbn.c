#include<stdio.h>
#include<math.h>
// 1 + 3 + 5 + 7 + .... + N 
int x(int N);
int main(){
    int n;
    scanf("%d", &n);
    int val = x(n);
    printf("%d\n", val);
    printf("%d\n", x(n));
}
int x(int N){
    int sum=0;
    for(int i=2; i<=N; i=i+2){
        sum = sum + pow(i,3);
        // sum = sum + (i*i*i);
    }
    return sum;
}