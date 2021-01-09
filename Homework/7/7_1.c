#include <stdio.h>

int main()
{
	int arr[5] = {31, 17, 33, 22, 16};
	
	int *ptr = arr;
	size_t i =0;
	for(i=0;i<5;i++)
	{
		*ptr = *ptr + 10;
		printf("%d ",arr[i]);
		ptr++;
	}
}
