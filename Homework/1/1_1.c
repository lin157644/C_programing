#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three different integers:");
    scanf("%d%d%d", &a, &b, &c);
    printf("Sum is %d\nAverage is %d\nProduct is %d\nSmallest is %d\nLargest is %d",a+b+c,(a+b+c)/3,a*b*c,(a<b?a:b)<c?(a<b?a:b):c,(a>b?a:b)>c?(a>b?a:b):c);

}
