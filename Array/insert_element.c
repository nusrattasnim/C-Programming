#include<stdio.h>
int main()
{
    int array[50]={0},i,element,pos,N;

    printf("Enter the size of an array\n");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the position where you want to insert an element\n");
    scanf("%d",&pos);

    printf("Enter the element that you want to insert\n");
    scanf("%d",&element);

    for(i=N;i>=pos;i--)
    {
        array[i]=array[i-1];
    }
    array[pos-1]=element;
    for(i=0;i<=N;i++)
    {
        printf("%d\n",array[i]);
    }


}
