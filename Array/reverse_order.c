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
    printf("The array in reverse order\n");
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }


}
