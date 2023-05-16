#include <stdio.h>
int bank(int balance){
    int x=5;
    balance =x+balance;
    return balance;
}
int bank2(int *bala){
    int x=5;
    *bala =x+*bala;
    return *bala;
}
float NewArr(){
    float avrg
    return avrg;
}
int main()
{

    int *p;
    int x=34;
    p=&x;
    printf("%d\n", *p);
    x--;
    printf("%d\n", *p);

    int ba=95;
    printf("%d\n",bank(ba));
    printf("%d\n", ba);

    int Ca=95;
    printf("%d\n",bank2(&Ca));
    printf("%d\n", Ca);

    float

    return 0;
}
