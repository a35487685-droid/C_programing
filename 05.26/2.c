#include <stdio.h>
#include <ctype.h>
#include "1.c"

int main(void){
    char c;
    printf("one character:");
    scanf("%c",&c);
    printf("%c", up_down_case(c));
    return 0;
}