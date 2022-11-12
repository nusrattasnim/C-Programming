#include<stdio.h>
int main ()
{
    char str[100];
    int i,length=0,word=1;

    printf("Enter a string\n");
    gets(str);

    length=strlen(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
           word++;

    }
    printf("Total word number is %d\n",word);




}
