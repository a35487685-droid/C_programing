#include <stdio.h>
int main(void)
{
int i,j;
int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(i = 0; i<3; i++){
	int sum=0;
	for(j = 0; j<3; j++){
	    sum += a[i][j];
	    printf("%d",a[i][j]);
	}
	printf("%d\n",sum);
    }
return 0;
}

