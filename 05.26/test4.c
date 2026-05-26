#include <stdio.h>
int max(int a, int b)
{
    if ( a < b)
    {
	printf("%d is big", b);
    }
    if ( a > b)
    {
	printf("%d is big", a);
    }
}
int main(void)
{
    int a,b;
    printf("first number:");
    scanf("%d", &a);
    printf("second number:");
    scanf("%d", &b);
    max(a,b);
    return 0;
}

