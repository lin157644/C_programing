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
		printf("��%d�����Y�����G��", i);
		if(flip()) {
			printf("Heads(����)\n");
			t++;
		} else {
			printf("Tails(�ϭ�)\n");
			h++;
		} 
		
	}
	printf("Heads(����)�@�X�{%d��\n",h);
	printf("Fails(�ϭ�)�@�X�{%d��\n", t);
	
	return 0;
}

int flip(void)
{
	return (rand()%2)?1:0;	
}
