#include <stdio.h>

union n{
	char c;
	short s;
	int i;
	long b;
};

int main()
{
	union n a;

	printf("輸入型別char...");
	scanf("%c", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);
	printf("輸入型別short...");
	scanf("%hd", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);
	printf("輸入型別int...");
	scanf("%ld", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);
	printf("輸入型別long...");
	scanf("%lld", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);

}
