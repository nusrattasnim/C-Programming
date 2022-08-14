#include<stdio.h>
int main()
{
    int num1,num2,num3,result;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    result=(num1>num2 && num1>num3)?num1:(num2>num3)?num2:num3;
    printf("Largest Number is %d\n",result);

}
