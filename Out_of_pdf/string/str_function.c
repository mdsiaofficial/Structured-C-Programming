#include<stdio.h>
#include<string.h>
int main(){

    // 1. strlen
    char variable[] = {"I do programming"};
    printf("%d\n\n", strlen(variable));

    // 2. strcpy
    char cpytext[100];
    char vaar[] = {"Programming is awesome"};
    strcpy(cpytext, vaar);
    printf("%s\n\n", cpytext);
    
    // 3. strcat
    char daar[] = {"I am cse student, "};
    char taar[] = {"I do programming"};
    strcat(daar, taar);
    printf("%s\n\n", daar);
    
    // 4. strcmp
    char bar[] = {"Bulbul"};
    char jar[] = {"Bulbol"};
    printf("%d\n\n", strcmp(bar, jar));
    
    // 5. strrev
    char wee[] = {"Ashiq"}; // niraj
    printf("%s\n\n", strrev(wee));
    
    // 6. strlwr
    char text[] = {"My Name Is Ashiq"};
    printf("%s\n\n", strlwr(text));
    
    // 7. strupr
    char text2[] = {"My Name Is Ashiq"};
    printf("%s\n\n", strupr(text2));
    
    return 0;
}