#include <stdio.h>
#include <ctype.h>

char up_down_case(char c)
{
    if(islower(c))
	c = toupper(c);
    else if(isupper(c))
	c = tolower(c);
}
int main(void){
    char c;
    printf("one character:");
    scanf("%c",&c);
    printf("%c", up_down_case(c));
    return 0;
}