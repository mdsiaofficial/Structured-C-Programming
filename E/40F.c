#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    int i, j, len;

    printf("Enter your name: ");
    //scanf("%s", name);
    gets(name);

    len = strlen(name);

    for (i = 0; i < len; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }
    for (i = len; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    return 0;
}
