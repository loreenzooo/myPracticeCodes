#include <stdio.h>

int main()
{

    int hrs, mins, secs, numbersOfSeconds = 0;
    

    printf("Enter numbers of seconds: \n");
    scanf("%d", &numbersOfSeconds);

    hrs = numbersOfSeconds / 3600;
    mins = (numbersOfSeconds % 3600) / 60;
    secs = numbersOfSeconds / 60;

    printf("The numbers of seconds is: %d, and the hours is: %d, and the minutes is: %d, the seconds is: %d", numbersOfSeconds, hrs, mins, secs);
}