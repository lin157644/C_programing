#include <stdio.h>
#include <math.h>

int countPrime(int);

int main()
{
	int n;
	
	printf("�п�J�@�Ӽ�:");
	while(scanf("%d",&n)!=EOF)
	{
		printf("1��%d�����@��%d�ӽ��\n", n, countPrime(n));
		printf("�п�J�@�Ӽ�:");
	}
}

int countPrime(int n)
{
	size_t i, j;
	int c=0;
	for(i=2; i<=n; i++)
	{
		if(isPrime(i)) c++;
	}
	
	return c;
}

int isPrime(int n)
{
	size_t i;
	
	if(n%2==0){
		return n==2;
	} else {
		int nSqrt=(int)floor(sqrt(n));
		//printf("%d:%d\n", n, nSqrt);
		for(i=3;i<=nSqrt;i+=2)
			{
				if(n%i==0) {
					return 0;
				}
			}
		return 1;
	}
	
}
