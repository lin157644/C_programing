#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    size_t n=0;
    while((c=getchar())!=EOF)
    {
        n=0;
        do
        {
            if(!isalpha(c)) continue;
            n++;
            while(isalpha(c))
            {
                c = getchar();
            }
        }while((c=getchar())!='\n');
        printf("%d\\n", n);
    }


}
