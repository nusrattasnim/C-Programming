#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your input\n");
    scanf("%c",&ch);
    ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))?printf("%c is an alphabet\n",ch):
                                           printf("%c is not an alphabet\n",ch);


}
