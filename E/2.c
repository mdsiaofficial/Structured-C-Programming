#include <stdio.h>

int main()
{
    //char ch = 'a';
    
    char ch;
    scanf("%c",&ch);

    
    if(ch>='a' && ch<='z'){
        printf("Alphabets from a - z are: \n");
        while(ch<='z')
        {
            printf("%c\n", ch);
            ch++;
        }
    }else{
        printf("Alphabets from A - Z are: \n");
        while(ch<='Z')
        {
            printf("%c\n", ch);
            ch++;
        }
    }
    
    return 0;
}