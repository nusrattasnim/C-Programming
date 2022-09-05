#include<stdio.h>
int main()
{
    int number, reverse=0,remainder,n;
    printf("Enter a number\n");
    scanf("%d",&number);
    n=number;

    while(number!=0)
    {
      remainder=number%10;
      reverse=reverse*10+remainder;
      number=number/10;

    }
    printf("Reverse number is %d\n",reverse);
   if(n==reverse)
   {
    printf("Original and reverse number is same\n");
   }
   else
   {
    printf("Original and reverse number is not same\n");
   }
}

