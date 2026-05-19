#include <stdio.h>

int inputNum()
{
    int number;
    scanf("%d", &number);
    return number;
}

int main(void)
{
    int number1;
    int number2;
    
    printf("Enter your first number : ");
    number1 = inputNum();
    printf("Enter your first number : ");
    number2 = inputNum();
    
    printf("%d + %d = %d", number1, number2, number1 + number2);

    return 0;
}