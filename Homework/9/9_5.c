#include <stdio.h>

int main()
{
    char x[11];
    scanf("%s", x);
	printf("\"%s\"\n", x);
	printf("\\%20s\\\n", x);
	printf("\\%-20s\\", x);


}
