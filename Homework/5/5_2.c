#include <stdio.h>

_Bool isPerfect(int);

int main()
{
	int limit;
	size_t i;
	printf("請輸入程式的上限: ");
	
	while(scanf("%d", &limit)!=EOF)
	{
		for(i=1; i<=limit; i++)
		{
			if(isPerfect(i)) {
				printf("%d\n", i);
			}
			
		}
		printf("請輸入程式的上限: ");
	}
	
}

_Bool isPerfect(int n)
{
	int product=0;
	size_t i;
	for(i=1; i<n; i++)
	{
		if(!(n%i)) product+=i;
	}
	
	if(product==n) return 1;
	else return 0;
	
}
