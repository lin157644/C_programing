#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

int main()
{
	
	srand(time(NULL));
	int h=0, t=0;
	size_t i;
	
	for(i=1; i<=10; i++)
	{
		printf("第%d次投擲的結果為", i);
		if(flip()) {
			printf("Heads(正面)\n");
			t++;
		} else {
			printf("Tails(反面)\n");
			h++;
		} 
		
	}
	printf("Heads(正面)共出現%d次\n",h);
	printf("Fails(反面)共出現%d次\n", t);
	
	return 0;
}

int flip(void)
{
	return (rand()%2)?1:0;	
}
