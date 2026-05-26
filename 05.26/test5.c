#include <stdio.h>
#include <ctype.h>
int main(void){
    int c;
    while((c = getchar()) != EOF) {
	if(islower(c))
	    c = tolower(c);
	else if(isupper(c))
	    c = toupper(c);
	printf("%c\n",c);
	}
	return 0;
}