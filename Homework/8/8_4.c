#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	int i;
	
	while(scanf("%s", s))
	{

		for(i=strlen(s)-1; i>=0; i--)
		{
			printf("%c", s[i]);
		}
		printf(" ");
		if(getchar()=='\n') printf("\n");
		
	}
	
	
}
