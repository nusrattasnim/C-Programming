#include<stdio.h>
#define N 5
int main()
{
    int array[N],i;
    printf("Enter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<N;i++)
    {

        if(array[i]%2==1)
            printf("%d ",array[i]);
    }


}
