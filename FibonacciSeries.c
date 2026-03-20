// Fibonacci Series

#include <stdio.h>
int main() 
{
    int n, i, first=0, second=1, nextnum;

    printf("Enter number of terms for the series: ");
    scanf("%d", &n);

    printf("The Fibonacci series is: ");

    for (i=0; i<n; i++) 
    {
        if (i==0) 
        {
            printf("%d ", first);  
        } 
        else if (i==1) 
        {
            printf("%d ", second); 
        } 
        else 
        {
            nextnum = first+second;
            printf("%d ", nextnum);
            first=second;
            second=nextnum;
        }
    }
    printf("\n");
    return 0;
}
