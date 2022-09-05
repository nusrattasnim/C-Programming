#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter a number\n");

    scanf("%d",&num);

    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial is %d",fact);

}
