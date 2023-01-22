#include<stdio.h>
#include<string.h>
int main(){

    // 1. strlen
    char text1[] = {"I do programming"};
    printf("%d\n", strlen(text1));

    // 2. strcpy
    char cpytext[100];
    char text2[] = {"Programming is awesome"};
    strcpy(cpytext, text2);
    printf("%s\n", cpytext);
    
    // 3. strcat
    char text3[] = {"I am cse student, "};
    char text4[] = {"I do programming"};
    strcat(text3, text4);
    printf("%s\n", text3);
    
    // 4. strcmp
    char text5[] = {"Bulbul"};
    char text6[] = {"Bulbol"};
    printf("%d\n", strcmp(text5, text6));
    
    // 5. strrev
    char text7[] = {"Ashiq"}; // niraj
    printf("%s\n", strrev(text7));
    
    // 6. strlwr
    char text8[] = {"My Name Is Ashiq"};
    printf("%s\n", strlwr(text8));
    
    // 7. strupr
    char text9[] = {"My Name Is Ashiq"};
    printf("%s\n", strupr(text9));
    
    return 0;
}