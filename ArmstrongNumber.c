// Armstrong Number

#include <stdio.h>
#include <math.h>  

int main() 
{
    int num, num2, remainder, n=0;
    double result = 0.0;

    printf("Enter the number: ");
    scanf("%d", &num);

    num2 = num;
    
    while (num2 != 0) 
    {
        num2/=10;
        ++n;
    }

    num2=num;

    while (num2 != 0) 
    {
        remainder = num2 % 10;
        result += pow(remainder, n);
        num2 /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
