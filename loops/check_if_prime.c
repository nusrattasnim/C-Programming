#include<stdio.h>
int main()
{
    int num,flag=0,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num==1 || num==0)
        flag=1;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Not a prime number\n");
    else
         printf("prime number\n");
}
