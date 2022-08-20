#include<stdio.h>
int main()
{
    float mark1,mark2,mark3,mark4,mark5,total,percentage;
    printf("Enter 5 marks\n");
    scanf("%f %f %f %f %f",&mark1,&mark2,&mark3,&mark4,&mark5);
    total=mark1+mark2+mark3+mark4+mark5;
    percentage=(total*100)/500;

    if(percentage >= 90)
        printf("A+\n");
    if(percentage >= 80)
        printf("B\n");
    if(percentage >= 70)
        printf("C\n");
    if(percentage >= 60)
        printf("D\n");
    if(percentage >= 40)
        printf("E\n");
    if(percentage < 40)
        printf("F\n");
}
