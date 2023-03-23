#include <stdio.h>

int main()
{
    int n=10;
    //scanf("%d",&n);
    for(int i=1; i<=n; i++){
        /* if(i%2==0){
            for(int j=1; j<=i; j++){
                printf("%d ",0);
            }   
        }else{
            for(int j=1; j<=i; j++){
                printf("%d ",1);
            }
        } */
        for(int j=1; j<=i; j++){
                printf("%d\t",i%2);
            }
        
        printf("\n");
    }
    
    return 0;
}
