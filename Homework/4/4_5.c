#include <stdio.h>

//int t;

void hanoi(int, int, int, int);


int main()
{
    int n;

    while(scanf("%d", &n)!=EOF)
    {
        
        //hanoi (from, heading ,temp , stacks)
        hanoi(1, 3, 2, n);

    }


}

void hanoi(int a, int b, int c, int n)
{

    if(n==1)
    {
        printf("move %d to %d\n", a, b);
        //t++;
    }
    else
    {
        hanoi(a, c, b, n-1);
        printf("move %d to %d\n", a, b);
        //t++;
        //hanoi(a, b, c, n);
        hanoi(c, b, a, n-1);
    }

}
