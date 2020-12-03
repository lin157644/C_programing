#include <stdio.h>
int main()
{
    int freq[11]={0};
    int occur[10]={0};
    int temp;
    int p=0;
    do
    {
        scanf("%d",&temp);
        if(p<10){
            if(freq[temp]==0) {
            occur[p]=temp;
            p++;
            }
        }
        freq[temp]++;
    } while (getchar()!='\n');

    for(int i=0; i<p; i++)
    {
        printf("%d %d\n", occur[i], freq[occur[i]]);
    }
    return 0;
}
