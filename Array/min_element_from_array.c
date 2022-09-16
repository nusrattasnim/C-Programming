#include<stdio.h>
#define N 5
int main()
{
    int array[N],i,min;
    printf("Enter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
    min=array[0];
     for(i=1;i<N;i++)
    {
        if(array[i]<min)
            min=array[i];
    }
    printf("Minimum element is %d",min);




}
