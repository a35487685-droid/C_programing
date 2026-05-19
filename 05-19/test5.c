#include <stdio.h>

int sum_p(int i, int j)
{
    j = j + i;
    printf("The sum(0:%d) = %d\n", i, j);
	return j;
}

int inputNum()
{
    int n;
    scanf("%d", &n);
    return n;
}
int main(void){
    int i, j;


    for (i= inputNum(), j = inputNum(); i <=10; i++){
	j = sum_p(i,j);
    }
    return 0;
}