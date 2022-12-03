#include <stdio.h>
#include <string.h>
int main() 
{
 
    //char *(a[7])={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"},m; 
    string a[7]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"}; 
    printf("Enter the week day:");
    int x;
    scanf("%d",&x);
/*  scanf("%d",&m);
    if(m>7 || m<1){
    	printf("invalid input");
    }else}
        printf("%s",a[m-1]);
    }
 */
    if(x>7 || x<1){
    	printf("invalid input");
    }else}
        printf("%s", a[x-1]);
    }

   return 0;
}
