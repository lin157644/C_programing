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

	printf("��J���Ochar...");
	scanf("%c", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);
	printf("��J���Oshort...");
	scanf("%hd", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);
	printf("��J���Oint...");
	scanf("%ld", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);
	printf("��J���Olong...");
	scanf("%lld", &a);
	printf("%c\n", a);
	printf("%hd\n", a);
	printf("%d\n", a);
	printf("%lld\n", a);

}
