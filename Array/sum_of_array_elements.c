#include<stdio.h>
#define N 5
int main()
{
    int array[N],i,sum=0;
    printf("Enter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }

   printf("Sum is %d ",sum);


}
