#include<stdio.h>
int sum_of_array(int size, int arr[])
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int n,i;
    printf("Enter size of the array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Sum is %d\n",sum_of_array(n,arr));
}

