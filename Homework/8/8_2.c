#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int i, j;
    int groups;
    int glen = 0;
    while(scanf("%d", &groups))
    {
        if(groups==0) break;
        scanf("%s", s);
        glen = strlen(s) / groups;
        for(i=0;i<groups;i++)
        {
            for(j=glen-1; j>=0;j--)
            {
                printf("%c", s[i*glen+j]);
            }
        }
        puts("");
    }
}
