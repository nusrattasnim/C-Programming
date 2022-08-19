#include<stdio.h>
int main()
{
    int age1,age2,age3;
    printf("Enter three ages\n");
    scanf("%d %d %d",&age1,&age2,&age3);

    if(age1<age2 && age1<age3)
        printf("%d age is the lowest\n",age1);
    else if (age2<age3)
       printf("%d age is the lowest\n",age2);
    else
        printf("%d age is the lowest\n",age3);
}
