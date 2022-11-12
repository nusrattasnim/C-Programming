#include<stdio.h>
int main ()
{
    char myName[]="Bangladesh";
    int i,length=0;

    length=strlen(myName);

    for(i=length-1;i>=0;i--)
    {
        printf("%c\n",myName[i]);
    }




}
