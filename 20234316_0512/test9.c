#include <stdio.h>
int main(void)
{
	int i,n,f;
	printf("Enter your dan :");
	scanf("%d", &n);
	f=1;
	while(f == 1)
	{
	  i=1;
	  while(i <= 9)
		{
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
		}
	  f++;
	}
	return 0;
}