#include<stdio.h>
int main()
{
    char main_str[100]="Bangladesh";
    char copy_str[100];
    int i=0;

    while(main_str[i]!='\0')
    {
        copy_str[i]=main_str[i];
        i++;
    }
    copy_str[i]='\0';

    printf("Copied String: ");
    for(i=0;copy_str[i]!='\0';i++)
    {
        printf("%c",copy_str[i]);
    }
}
