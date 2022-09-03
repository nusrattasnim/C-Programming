#include<stdio.h>
int main()
{
 int unit;
 float charge;

 printf("Enter the unit you used\n");
 scanf("%d",&unit);

 if (unit<=200)
    charge=.5*unit;
 else if (unit<=400)
    charge=100+.65*(unit-200);
 else if (unit<=600)
    charge=230+.8*(unit-400);
 else
    charge=390+1*(unit-600);

 printf("Charge is %.2f\n",charge);
}
