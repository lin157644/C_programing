#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",num%2?num*num:num*num*num);
}
