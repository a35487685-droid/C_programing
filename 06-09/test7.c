#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int list[6];
    srand(time(NULL));
    for(int i=0; i<6; i+=1){
	list[i] = rand() % 46;
	printf("%d ", list[i]);
}
    return 0;
}
