#include <stdio.h>
int main(void)
{
    int key, i, si;
    printf("Input size of the list :");
    scanf("%d", &si);
    int list[si];
    printf("Input %d values of the list : ", si);
    for(i = 0; i <si; i++){
	scanf("%d", &list[i]);
}
    for (i = 0; i <si; i++){
	printf("%d ", list[i]);
}
    printf("\nInput a key value : ");
    scanf("%d", &key);
    for(i =0; i<si; i++)
	if(list[i] == key)
	    printf("Find the key at %d of the list array\n", i+1);
    printf("End\n");
    return 0;
}