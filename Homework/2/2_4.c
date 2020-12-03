#include <stdio.h>
#include <math.h>

int getdigits(int);

int main()
{

    int n;
    int a;


    scanf("%d", &n);

    int d=getdigits(n);

    for(int i=1; i<=d; i++)
    {
        if(n%10==9)
        {
            a++;
        }

        n /= 10;


    }
    printf("%d\n", a);

}

int getdigits(int n)
{
    int digits=0;


    while(n!=0)
    {
        n/=10;
        digits++;
    }
    //printf("%d",digits);
    return digits;

}
