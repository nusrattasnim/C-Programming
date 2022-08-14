/*If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item. */
#include<stdio.h>
int main()
{
    float selling_price, profit,cost_price;
    printf("Enter the selling price of 15 items: ");
    scanf("%f", &selling_price);
    printf("Enter the profit on 15 items: ");
    scanf("%f", &profit);


    cost_price = (selling_price-profit)/15;

    printf("\nThe cost price of an item is %.2f.", cost_price);
    return (0);
}


