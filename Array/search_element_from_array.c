#include<stdio.h>
#define N 5
int main()
{
    int array[N],i,search,flag=0;
    printf("Enter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d",&search);

     for(i=1;i<N;i++)
    {
            if(search==array[i])
            {
                flag=1;
                break;
            }
    }
    if(flag==0)
        printf("%d element is not found in the array\n",search);
    else
        printf("%d element is found in the array\n",search);




}
