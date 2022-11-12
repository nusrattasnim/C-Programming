#include<stdio.h>
int main ()
{
    char myName[]="Bangladesh";
    int length=0,i;

    for(i=0;myName[i]!='\0';i++)
    {
        length++;
    }

    printf("Length of the string is %d\n",length);


}
