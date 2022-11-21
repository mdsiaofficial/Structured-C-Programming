#include <stdio.h>
int main() {
    float a;
    scanf("%f", &a);

    if(a>=10000 && a<=20000){
        a=a+(a*0.2)+(a*0.8);
    }else if(a>=20000 && a<=30000){
        a=a+(a*0.25)+(a*0.9);
    }else if(a>=30000){
        a=a+(a*0.3)+(a*0.95);
    }
//
//
    printf("%.2f", a);
    return 0;
}
