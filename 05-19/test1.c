#include <stdio.h>
int main(void)
{
	int number1; 
	int number2;
	printf("Enter your first number :");
	scanf("%d", &number1);
	printf("\nEnter your second number :");
	scanf("%d", &number2);
	printf("\n%d + %d = %d", number1, number2, number1 + number2);
	return 0;
}
