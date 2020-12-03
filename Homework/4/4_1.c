#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        printf("%d\n", fibonacci(n));
    }

}

int fibonacci(n)
{

    switch(n)
    {
        case 1:
            return 0;
            break;
        case 2:
            return 1;
        default:
            return fibonacci(n-1)+fibonacci(n-2);
    }

}
