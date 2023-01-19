#include<stdio.h>
#include<string.h>
int main(){

    // 1. strlen
    char variable[] = {"My name is jannat"};
    printf("%d\n\n", strlen(variable));

    // 2. strcpy
    char cpytext[100];
    char vaar[] = {"Ami saradin pori"};
    strcpy(cpytext, vaar);
    printf("%s\n\n", cpytext);
    

    // 3. strcat
    char daar[] = {"Ami Jarin, "};
    char taar[] = {"Ami saradin pori"};
    strcat(daar, taar);
    printf("%s\n\n", daar);
    
    // 4. strcmp
    char bar[] = {"Ami Jarin"};
    char jar[] = {"Ami Jarin"};
    printf("%d\n\n", strcmp(bar, jar));
    
    // 5. strrev
    char wee[] = {"jarin"}; // niraj
    printf("%s\n\n", strrev(wee));
    
    // 6. strlwr
    char text[] = {"Ami ashiq, Amar Porte Valo Lage Na"};
    printf("%s\n\n", strlwr(text));
    
    
    // 7. strupr
    char text2[] = {"Ami Jarin, Amar Porte Valo Lage"};
    printf("%s\n\n", strupr(text2));
    

}