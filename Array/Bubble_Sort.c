#include<stdio.h>
#define N 5
int main()
{
    int array[]={1300,498,300,56,34},i,j,temp;

    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",array[i]);
    }

}
