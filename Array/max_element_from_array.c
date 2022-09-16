#include<stdio.h>
#define N 5
int main()
{
    int array[N],i,max;
    printf("Enter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
     for(i=1;i<N;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    printf("Maximum element is %d",max);




}
