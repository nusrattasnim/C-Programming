#include<stdio.h>
int main()
{
    int number, sum=0;
    printf("Enter a number\n");
    scanf("%d",&number);

    while(number!=0)
    {
        sum=sum+number%10;
        number=number/10;
    }

    printf("Sum is %d",sum);
}
