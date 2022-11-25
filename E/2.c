#include <stdio.h>

int main()
{
    //char ch = 'a';
    char ch;
    scanf("%c",&ch);

    printf("Alphabets from a - z are: \n");
    if(ch>='a' && ch<='z'){
        while(ch<='z')
        {
            printf("%c\n", ch);
            ch++;
        }
    }else{
        while(ch<='Z')
        {
            printf("%c\n", ch);
            ch++;
        }
    }
    
    return 0;
}