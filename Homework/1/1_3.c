#include <stdio.h>

int main()
{
    int t;

    scanf("%d",&t);
    printf("%d:%d:%d",t/3600,t/60,t%60);
}
