#include <stdio.h>

double toJPY(int);
double toEUR(int);
double toTWD(int);

int main()
{
	int money;
	printf("�п�J�n�I���������G ");
	
	while(scanf("%d", &money)!=EOF)
	{
		printf("�I����A�N�|��o�G\n"); 
		printf("%.2lf �����\n", toJPY(money));
		printf("%.4lf ���ڤ�\n", toEUR(money));
		printf("%.2lf ���s�x��\n", toTWD(money));
		printf("�п�J�n�I���������G ");
	}
	
} 

double toJPY(int m)
{
	return m*104.18;
}

double toEUR(int m)
{
	return m*0.8479;
}

double toTWD(int m)
{
	return m*28.21;
}
