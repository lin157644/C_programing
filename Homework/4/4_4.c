#include <stdio.h>

_Bool tri(int, int, int);

int main()
{

    int a, b, c;

    printf("Enter side 1:");
    while(scanf("%d", &a)!=EOF) {

        printf("Enter side 2:");
        scanf("%d", &b);
        printf("Enter side 3:");
        scanf("%d", &c);

        if(tri(a, b, c)) {
            printf("The numbers make a right triangle\n");
        } else {
            printf("The numbers don't make a right triangle\n");
        }

        printf("Enter side 1:");
    }

}

_Bool tri(int a, int b, int c)
{
    int m;

    return (a>b) ? ( (a>c) ? ( (b*b+c*c==a*a)?1:0 ) : ( (a*a+b*b==c*c)?1:0 ) ) : ( (b>c) ? ( (a*a+c*c==b*b)?1:0 ) : ( (b*b+a*a==c*c)?1:0 ) );
}

    /*if(a>b)
    {
        if(a>c)
        {
            if(b*b+c*c==a*a) return 1;

        }
        else
        {
            if(a*a+b*b==c*c) return 1;
        }

    }
    else
    {
        if(b>c)
        {
            if(a*a+c*c==b*b) return 1;
        }
        else
        {
            if(b*b+a*a==c*c) return 1;
        }
    }

    return 0;*/
