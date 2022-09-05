/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1*/

#include<stdio.h>
int main()
{
    int i,j,n=1;

    for(i=1;i<=5;i++)
    {
        for(j=n;j>=1;j--)
        {
           printf("%d ",j);
        }
        n=n+1;
        printf("\n");
    }
}
