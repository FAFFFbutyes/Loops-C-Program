// Floyd Triangle

#include <stdio.h>
int main() 
{
    int rows, i, num=1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i=1; i<=rows; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
