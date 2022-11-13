#include<stdio.h>
int main()
{

    char str[100],sstr[100];
    int pos,len,c=0;

    printf("Enter a string\n");
    gets(str);

    printf("Enter position of extraction\n");
    scanf("%d",&pos);

    printf("Enter length of substring\n");
    scanf("%d",&len);


    while(c<len)
    {
        sstr[c]=str[pos+c-1];
        c++;
    }
    sstr[c]='\0';

    puts(sstr);





}
