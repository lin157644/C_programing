#include <stdio.h>

void swap(int*, int*);

int main()
{
    int a, b;
    printf("Please input two numvers...\n");
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap.\n");
    printf("a = %d, b = %d", a, b);
}

void swap(int *a, int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
