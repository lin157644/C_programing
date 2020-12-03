#include <stdio.h>
#include <stdlib.h>

void readNum(int[], int*);
int getSum(const int[], int);
int compare(const void*, const void*);
void sort(int[], int);
int mode(const int[], int);

int main()
{
    int *nums = calloc(100, sizeof(int));
    int sum=0;
    int len=0;

    readNum(nums, &len);

    printf("キА计: %.4lf", (double)getSum(nums, len)/len);

    if(len%2){
        printf("い计: %lf", (nums[len/2]+nums[len/2+1])/2);
    } else {
        printf("い计: %d", nums[len/2+1]);
    }

    printf("渤计: %d", mode(nums, len));
}

void readNum(int nums[], int *len)
{
    char c;
    //printf("%d", *len);
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
        {
            ungetc(c,stdin);
            scanf("%d", &nums[*len]);
            *len = *len+1;
        }

    }
}

int getSum(const int nums[], int len)
{
    int sum=0;
    for(int i=0; i<len; i++) {
        sum+=nums[i];
    }
    return sum;
}

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

void sort(int nums[], int len)
{
    qsort(nums, len, sizeof(int), compare);
}

int mode(const int nums[], int len)
{
    int maxnum=nums[0];
    int maxfreq=1;
    int freq=1;
    for(int i=1;i<=len;i++)
    {
        if(nums[i]==nums[i-1]) {
            freq++;
        } else {
            if(freq>maxfreq) {
                maxfreq=freq;
                maxnum=nums[i-1];
            }
            freq=1;
        }
    }
    if(freq>maxfreq) {
        maxfreq=freq;
        maxnum=nums[len];
    }

    return maxnum;
}
