#include <stdio.h>
#include <ctype.h>
#include "my_header.h"

int main(void){
    char c;
    printf("one character:");
    scanf("%c",&c);
    printf("%c", exturn up_down_case(c));
    return 0;
}