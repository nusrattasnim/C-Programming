#include<stdio.h>
int main()
{
    int num,first_term=0,second_term=1,next_term,i;
    printf("Enter a number\n");
    scanf("%d",&num);

    printf("%d %d ",first_term,second_term);

    next_term=first_term+second_term;

    for(i=3;i<=num;i++)
    {
        printf("%d ",next_term);
        first_term=second_term;
        second_term=next_term;
        next_term=first_term+second_term;
    }

    return 0;

}
