#include <stdio.h>

int main()
{

    int a, b;
    int m = 0;


    while(scanf("%d%d", &a, &b)!=EOF)
    {

        if(a>b)
        {
            a ^= b;
            b ^= a;
            a ^= b;
        }

        for(a; a<=b; a++)
        {
            int c = 1;
            int n = a;

            while(n!=1)
            {

                n = n%2?3*n+1:n/2;
                c++;

            }

            m = c>m?c:m;
        }


        printf("%d\n",m);

    }


}
