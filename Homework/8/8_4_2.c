#include <stdio.h>
#include <ctype.h>

int main()
{
    int freq[27]={0};
    int n, i, o, a, max;
    char c;
    while(scanf("%d", &n)!=EOF)
    {
        i=0;
        o=0;
        while(i<n+1)
        {
            if((c=getchar())=='\n') {
                i++;
                //printf("i++");
                continue;
            }
            if(isalpha(c)) {
                freq[c]++;
                //printf("freq[c]++");
            }
        }
        int d;
        while(1)
        {
            a=0;
            for(int k=0;k<26;k++)
            {
                if(freq[a]>=max) {
                    a=k;
                    d=1;
                }
            }
            if(d=0) break;
            printf("%c %d", freq[a]+'a', freq[a]);
            freq[a]=0;
        }

    }
}
