#include<stdio.h>
int main()
{
    int n;  
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    printf("Prime numbers are:-\n");    
    for(int i=2;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
                //c=c+1;
            }
        }    
        if(c==2)
        {
            printf("%d ",i);
        }
    }

    return 0;
}