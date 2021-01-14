#include <stdio.h>

int main()
{
	int t, n;	
	char c;
	size_t i, j;
	
	while(scanf("%d", &t)!=EOF)
	{
		getchar();
		
		for(i=1; i<=t; i++)
		{
			c=getchar();
			printf("Case %d:", i);
			while(1) {
				if(c=='\n') {
					printf("\n");
					break;
				}
				scanf("%d", &n);
				for(j=0; j<n; j++) {
					printf("%c", c);
				}
				c=getchar();
			}
		}
		
		
	}
	
	
}
