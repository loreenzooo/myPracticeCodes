#include <stdio.h>

int main()
{

    int scores;
    int totalScores = 0;
    double average = 0;
    int userInput = 0;
    int largest = 0;
    int smallest = 0;
    do
    {
        printf("Enter test score %d: ", ++userInput);
        scanf("%d", &scores);
        
        totalScores += scores;

        if (userInput == 1)
        {
            largest = scores;
            smallest = scores;
        }
        if (scores > largest){
            largest = scores;
        }
        if (scores < smallest){
            smallest = scores;
        }

    } while (userInput < 5);
    average = totalScores / 5;
    printf("Total scores: %d\n", totalScores);
    printf("Average: %.2lf\n", average);
    printf("The largest is: %d\n", largest);
    printf("The smallest is: %d", smallest); 
    return 0;
}