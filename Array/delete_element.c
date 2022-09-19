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

    printf("Enter the position where you want to delete an element\n");
    scanf("%d",&pos);


    for(i=pos-1;i<N-1;i++)
    {
        array[i]=array[i+1];
    }

    for(i=0;i<N-1;i++)
    {
        printf("%d\n",array[i]);
    }


}
