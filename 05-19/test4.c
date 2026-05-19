#include <stdio.h>

int inputNum()
{
    int number;
    scanf("%d", &number);
    return number;
}

int add(int a, int b)
{
    return a + b;
}

void printResult(int a, int b, int result)
{
    printf("%d + %d = %d", a, b, result);
}

int main(void)
{
    int number1;
    int number2;
    int result;    

    printf("Enter your first number : ");
    number1 = inputNum();
    printf("Enter your first number : ");
    number2 = inputNum();
    
    result = add(number1, number2);
    printResult(number1, number2, result);

    return 0;
}
