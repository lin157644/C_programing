#include <stdio.h>

int main()
{
    char c;
    int temp;
    int total=0;
    int counter=0;
    int occur[21]={0};
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9'){
            ungetc(c,stdin);
            scanf("%d", &temp);
            if(occur[temp]==0) {
                occur[temp]=1;
                total++;
            }
        }
    }
    printf("[");
    for(int i=1; i<=20; i++)
    {

        if(occur[i]==1) {
            counter++;
            if(counter==total) {
                printf("%d]", i);
            } else {
                printf("%d, ", i);
            }

        }
    }


}
