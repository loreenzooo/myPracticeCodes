#include <stdio.h>
int main()
{
char names[30] = {};
for(int i = 0; i < 5; i++){
    printf("Enter name: \n");
   scanf("%s", &names);
   printf("You input: %s\n", names);
}
    return 0;
}