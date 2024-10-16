#include <stdio.h>

int main()
{

    int employeeNumber;
    char employeeName[30];
    double hoursWorked = 0;
    double ratePerHour = 0;
    double grossSalary = 0;
    double WithHoldingTax = 0;
    double netSalary = 0;

    printf("Enter your employee number: ");
    scanf("%d", &employeeNumber);

    printf("Enter employee name: \n");
    scanf("%s", employeeName);

    printf("Enter hours worked: \n");
    scanf("%lf", &hoursWorked);

    printf("Enter rate per hour: \n");
    scanf("%lf", &ratePerHour);

    grossSalary = hoursWorked * ratePerHour;

    if (grossSalary <= 50000)
    {
        WithHoldingTax = grossSalary * 0.10;
    }
    else if (grossSalary > 50000 && grossSalary <= 100000)
    {
        WithHoldingTax = 5000 + 0.15 * (grossSalary - 50000);
    }
    else if (grossSalary > 100000 && grossSalary <= 200000)
    {
        WithHoldingTax = 15000 + 0.20 * (grossSalary - 100000);
    }
    else
    {
        WithHoldingTax = grossSalary * 0.25;
    }

    netSalary = grossSalary - WithHoldingTax;

    printf("Your Employee number is: %d\n", employeeNumber);
    printf("Your Employee name is: %s\n", employeeName);
    printf("Your Hours worked is: %.2lf\n", hoursWorked);
    printf("Your Rate per hour is: %.2lf\n", ratePerHour);
    printf("Your Gross salary is: %.2lf\n", grossSalary);
    printf("Your Withholding tax is: %.2lf\n", WithHoldingTax);
    printf("Your Net salary is : %.2lf", netSalary);

    return 0;
}