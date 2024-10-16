#include <stdio.h>
int main() {

  double tax = 18.00;
  double salary;
  


printf("Enter your salary: ");
scanf("%.2lf", &salary);

double finalSalary = salary / tax;


printf("Your final salary is: %.2lf", finalSalary);

   /*
const double salaryperHour = 64.13;
int numberOfHoursWorked;
double salary;
char workersName [30];

printf("Enter workers name: ");
scanf("%s", &workersName);

printf("Enter number of hours worked: \n");
scanf("%d", &numberOfHoursWorked);

 salary = salaryperHour * numberOfHoursWorked;

printf("You are: %s\n", workersName);
printf("Your salary is: %.2lf",  salary);
/*
char letter[30];
int num1 = 12;
double num2 = 12.30;
float num3 = 12.30050;

printf("The size of char: %d\n", sizeof(char));
printf("The size of int: %d\n", sizeof(int));
printf("The size of double: %d\n", sizeof(double));
printf("The size of float: %d", sizeof(float));
*/
    return 0;
}