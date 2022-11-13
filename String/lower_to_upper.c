#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string\n");

    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
        else
            str[i]=str[i]-32;
    }
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
}
