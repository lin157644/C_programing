#include <stdio.h>

int LCM(int, int);
int GCD(int, int);

int main()
{
	int a, b;
	
	printf("請輸入兩個整數：");
	
	while(scanf("%d%d", &a, &b)!=EOF)
	{
		printf("最小公倍數為：%d", LCM(a, b));		
	}
	
}

int GCD(int a, int b)
{
	int t;
	while(b!=0){
		t=b;
		b = a%b;
		a=t;
	}
	return a;
	
}
int LCM(int a, int b)
{
	return a*b/GCD(a, b);
}

