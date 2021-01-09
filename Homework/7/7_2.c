#include <stdio.h>

int main()
{
	char *ptr = "We are best friend.";
	int len = 0;
	int l = 0;
	size_t i = 0;
	while(ptr[i]!='\0') {
		if(ptr[i]>='a'&&ptr[i]<='z') l++;
		len++;
		i++;
	}
	printf("Length:%d, Lower Case:%d", len, l);
} 
