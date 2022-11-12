#include<stdio.h>
int main()
{

    char str[100],result;
    int freq[256]={0},i=0,max=0,len;

    printf("Enter a string\n");
    gets(str);

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        freq[str[i]]++;
        if(max<freq[str[i]])
          max=freq[str[i]];

          result=str[i];

    }

    printf("%d %c\n",max,result);





}
