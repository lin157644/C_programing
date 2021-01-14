#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t;
	char *ptr, *newPtr;
	size_t i, j, n;
	scanf("%d", &t);
	char c, s[100];
	
    for(i=0; i<t; i++)
    {
    	scanf("%s", s);
    	ptr=s;
    	c = ptr[0];
		ptr++;
		printf("Case %d:", )
		while((n=strtol(ptr, &newPtr, 10))!=0)
		{
			for(j=0; j<n; j++)
			{
				printf("%c", c);
			}
			
			ptr = newPtr;
			
			if(isalpha(ptr[0])) {
				c = ptr[0];
				ptr++;
			} else {
				break;
			}
			
		}
		puts("");
		
	}
}
