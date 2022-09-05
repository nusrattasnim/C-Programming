#include <stdio.h>
int main()
{
    int low_bound, up_bound,sum = 0,i;
    printf("Enter upper and lower bound\n");
    scanf("%d %d",&low_bound,&up_bound);
    for (i = low_bound; i <= up_bound; i++)
        sum = sum + i;

    printf("%d\n",sum);

    return 0;
}
