#include <stdio.h>

int main()
{
    int price,sell, amt; 
    
    printf("Enter cost price: ");
    scanf("%d", &price);
    printf("Enter selling price: ");
    scanf("%d", &sell);
    
    if(sell > price){
        amt = sell - price;
        printf("Profit = %d", amt);
    }else if(price > sell){
        amt = price - sell;
        printf("Loss = %d", amt);
    }else{
        printf("No Profit No Loss.");
    }

    return 0;
}