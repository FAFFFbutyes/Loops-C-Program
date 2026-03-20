// Reverse number

#include <stdio.h>
int main() 
{
    int num, reverse=0, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num>0){
    while (num != 0)
    {
        remainder = num%10;               
        reverse = reverse*10 + remainder; 
        num = num/10;                     
    }
    }
    else{
        printf("Invalid number \n");
    }
    printf("Reversed number is: %d\n", reverse);

    return 0;
}
