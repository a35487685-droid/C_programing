#include <stdio.h>
#include <ctype.h>

char up_down_case(char c)
{
    if(islower(c))
	c = toupper(c);
    else if(isupper(c))
	c = tolower(c);
}