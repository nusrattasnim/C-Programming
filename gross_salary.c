/*A computer manufacturing company has the following monthly compensation policy to the sales-person:
Minimum base salary: 1500
Bonus for every computer sold: 200
Commission on the total monthly sales: 2%
Write a program to calculate the gross salary for a sales person.
You will take input the price of each computer and the number of sold during the month.*/

#include<stdio.h>
int main()
{
       int    number_of_computer ;
       float  gross_salary, price ;
       float  bonus, commission ;

       printf("Input number sold and price\n") ;
       scanf("%d  %f", &number_of_computer, &price) ;

       bonus        = 200 * number_of_computer ;
       commission   = .02 * number_of_computer * price ;
       gross_salary = 1500 + bonus + commission ;

       printf("\n");
       printf("Bonus        = %6.2f\n", bonus) ;
       printf("Commission   = %6.2f\n", commission) ;
       printf("Gross salary = %6.2f\n", gross_salary) ;

}
