// Print numbers 1 to 5 using for loop, while loop, do-while loop 

#include <stdio.h>
int main() 
{
    int i;

    // For Loop 
    printf("For Loop:\n");
    for (i=1; i<=5; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");

    // While Loop
    printf("While loop:\n");
    i=1; 
    while (i<=5) 
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Do-while Loop
    printf("Do-while loop:\n");
    i=1; 

    do 
    {
        printf("%d ", i);
        i++;
    } 
    while (i<=5);
    printf("\n");

    return 0;
}
