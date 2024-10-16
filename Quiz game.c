#include <stdio.h>

void mathFunction()
{
    int answer;
    printf("3 + 2\n");
    scanf("%i", &answer);
    printf("Your answer is: %i", answer);
    if (answer == 5)
    {
        printf("\nYour answer is correct!");
    }
}

void englishFunction()
{
    char answer;
    printf("What is my name?");
    scanf("%c", &answer);
}
void scienceFunction()
{

    printf("Are sharks mammals?");
    char answer = scanf("%c", &answer);
}
void codingFunction()
{
    char answer;
    printf("How do you check if an integer is even or odd?");
    printf("\nChoices:\nA.Sample\nB.Sample\nC.Sample\n");
    
    printf("Enter your answer: ");
    scanf("%c", &answer);
    

    if (answer == 'B')
    {
        printf("Congrats your answer is correct!");
    }
}

int main()
{

    char m;
    char e;
    char s;
    char c;
    char picked;

    printf("----------Welcome to quiz game!----------\n");

    printf("Please enter subjects to answer: ");
    scanf("%c", &picked);

    switch (picked)
    {
    case 'e':
        englishFunction();
        break;

    case 'c':
        codingFunction();
        break;

    case 'm':
        mathFunction();
        break;

    case 's':
        scienceFunction();
        break;

    default:
        printf("Invalid choice!");
    }
    return 0;
}
