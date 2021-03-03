#include <stdio.h>

int main()
{
	int t, n;
	int f;
	size_t i, j;
	char c;
	while(scanf("%d", &t)!=EOF)
	{
		getchar();
		for(i=1; i<=t; i++)
		{
			f=0;
			while(c=getchar())
			{
				if(c=='\n') {
					printf("\n");
					break;
				}
				
				scanf("%d", &n);
				if(f==0) {
					printf("Case %d:", i);
					f++;
				}
				for(j=0; j<n; j++)
				{
					printf("%c", c);
				}
			}
			puts("");
			
		}
	}
	
	
	
	
}
