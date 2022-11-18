#include<stdio.h>
int main()
{
 int n,i;
 printf("Enter the number of elements in the array\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the elements\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 printf("Maximum element is %d\n",max_element(arr,n));
}

int max_element(int arr[],int size)
{
    int i,max;
    max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    return max;
}
