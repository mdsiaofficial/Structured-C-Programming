#include<stdio.h>
int max_num(int a, int b);
int min_num(int x, int y);
int main(){

    int a,b,x,y;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    printf("Max: %d\n", max_num(a,b));
    printf("Min: %d\n", min_num(x,y));
    return 0;
}

int max_num(int a, int b){
    if(a>b) {
        return a;
    }else{
        return b;
    }
}

int min_num(int x, int y){
    if(x<y) {
        return x;
    }else{
        return y;
    }
}
