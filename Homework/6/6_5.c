#include <stdio.h>
#include <math.h>

int main()
{
    int moves[10]={0};
    int hi[50];
    size_t n=0;
    size_t q=0;
    size_t i=0;
    int avg=0;

    scanf("%d",&n);
    while(n!=0)
    {
    	avg=0;
    	
        for(i=0; i<n; i++)
        {
            scanf("%d",&hi[i]);
            avg+=hi[i];
        }
        
        avg/=n;
        
        for(i=0; i<n; i++)
        {
        	moves[q]+=abs((hi[i]-avg));
		}
		
		moves[q]/=2;
		q++;
        scanf("%d",&n);
    }
    
    for(i=0; i<q; i++)
    {
    	printf("The minimum number of moves is %d\n", moves[i]);
	}


}
