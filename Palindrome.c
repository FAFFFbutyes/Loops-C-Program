// Check Palindrome Number

#include <stdio.h>
int main() 
{
    int num, reverse=0, remainder, num2;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num2 = num; 

    while (num != 0) 
    {
        remainder = num%10;             
        reverse = reverse*10 + remainder; 
        num = num/10;                   
    }

    if (num2 == reverse) 
    {
        printf("%d is a palindrome number.\n", num2);  
    } else {
        printf("%d is not a palindrome number.\n", num2);  
    }
    return 0;
}
