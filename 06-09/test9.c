#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int n;
    int ex;
    printf("Enter lotto set number : ");
    scanf("%d",&n);
    int list[n][6];
    srand(time(NULL));
    for(int j=0; j<n; j+=1){
	printf("set%d: ", j+1);
        for(int i=0; i<6; i+=1){
	    ex = rand() % 46;
	    for(int k=0; k < 6; k++){
		if(list[j][k] == ex){
			i--;

		else
		list[j][i] = ex;}

	    }
	    printf("%d ", list[j][i]);
}
	printf("\n");
}
    return 0;
}
