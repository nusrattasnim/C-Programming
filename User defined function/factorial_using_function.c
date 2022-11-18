#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num;
    printf("Enter a number whose factorial you want to know\n");
    scanf("%d",&num);
    printf("Factorial is %d\n",fact(num));

}
