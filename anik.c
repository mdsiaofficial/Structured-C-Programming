#include<stdio.h>

void print_hello(){
    printf("Hello World .\n");
}
void print_int( int a){
    printf("%d\n",a);
}
void print_float(float b){
    printf("%f\n",b);
}
void print_double(double c){
    printf("%lf\n",c);
}
void print_char(char d){
    printf("%c\n",d);
}
int input_int(){
    int x;
    scanf("%d",&x);
    printf("%d\n",x);
    return x;
}
float input_float(){
    float y;
    scanf("%f",&y);
    printf("%f\n",y);
    return y;
}
double input_double(){
    double z;
    scanf("%lf",&z);
    printf("%lf\n",z);
    return z;
}
char input_charrr(){
    char gh;
    scanf(" %c",&gh); // add a space before %c
    printf("%c\n", gh);
    return gh;
}

int main(){
    print_hello();
    print_int(5);
    print_float(5.5);
    print_double(5.578996854);
    print_char('c');
    input_int();
    input_float();
    input_double();
    input_charrr();

    return 0;
}
