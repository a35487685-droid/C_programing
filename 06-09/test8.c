#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int n;
    printf("Enter lotto set number : ");
    scanf("%d",&n);
    int list[n][6];
    srand(time(NULL));
    for(int j=0; j<n; j+=1){
	printf("set%d: ", j+1);
        for(int i=0; i<6; i+=1){
	    list[j][i] = rand() % 46;
	    printf("%d ", list[j][i]);
}
	printf("\n");
}
    return 0;
}
