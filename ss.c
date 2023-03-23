#include <stdio.h>
#include <string.h>

char* myFunction(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = '\0';
        }
    }
    return str;
}

int main() {
    char x[100];
    gets(x);
    printf("%s", myFunction(x));
    return 0;
}
