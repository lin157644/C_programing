#include <stdio.h>

int LCM(int, int);
int GCD(int, int);

int main()
{
	int a, b;
	
	printf("�п�J��Ӿ�ơG");
	
	while(scanf("%d%d", &a, &b)!=EOF)
	{
		printf("�̤p�����Ƭ��G%d", LCM(a, b));		
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

