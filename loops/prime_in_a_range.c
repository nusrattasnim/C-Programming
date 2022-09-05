//Printing prime numbers in a range
#include<stdio.h>
int main()
{
    int low_bound,up_bound,i,flag,j;
    printf("Enter the lower bound\n");
    scanf("%d",&low_bound);

    printf("Enter the upper bound\n");
    scanf("%d",&up_bound);

    for(i=low_bound;i<=up_bound;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
              flag=1;
              break;
            }
        }
        if(flag==0)
            printf("%d ",i);
    }

}



