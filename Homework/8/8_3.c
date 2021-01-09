#include <stdio.h>

int main()
{
    int n, i, j, r;
    char c;
    scanf("%d", &n);
    for(i=0; i<n;i++)
    {
        while((c=getchar())!='\n')
        {
            scanf("%d", &r);
            //scanf("%d[1234567890]", &r);
            for(j = 0; j<r;j++)
            {
                printf("%c", c);
            }

        }

    }
}
