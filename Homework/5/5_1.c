#include <stdio.h>

double toJPY(int);
double toEUR(int);
double toTWD(int);

int main()
{
	int money;
	printf("請輸入要兌換的美元： ");
	
	while(scanf("%d", &money)!=EOF)
	{
		printf("兌換後你將會獲得：\n"); 
		printf("%.2lf 元日圓\n", toJPY(money));
		printf("%.4lf 元歐元\n", toEUR(money));
		printf("%.2lf 元新台幣\n", toTWD(money));
		printf("請輸入要兌換的美元： ");
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
