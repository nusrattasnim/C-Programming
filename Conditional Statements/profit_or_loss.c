#include<stdio.h>
#include<conio.h>
int main()
{
    float cost_price, selling_price, profit, loss;
    printf("Enter the cost price of an item: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price of an item: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
    profit = selling_price - cost_price;
    printf("Profit is %.2f\n", profit);

    }
    else if (selling_price < cost_price)
    {
        loss = cost_price - selling_price;
        printf("Loss is %.2f\n", loss);
    }
   else
    {
        printf("\nWe don't get any loss and profit on selling item");
    }

}
