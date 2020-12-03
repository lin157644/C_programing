#include <stdio.h>
#include <math.h>

_Bool isPrime(int);


int main()
{

    int n, c;

    while(scanf("%d", &n)!=EOF)
    {

        c=0;

        for(int i=2; i<=n; i++)
        {

            if(n%i==0&&isPrime(i))
            {
                c++;
            }

        }
        printf("%d\n", c);

    }

    return 0;

}

_Bool isPrime(int n)
{

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }

    }
    //printf("%d is prime\n", n);
    return 1;


}
