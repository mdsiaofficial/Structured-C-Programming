#include<stdio.h>
int main()
{
    int i,j,n;  
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    printf("Prime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }    
        if(c==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
