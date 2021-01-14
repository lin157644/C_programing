#include <stdio.h>
#include <stdlib.h>

int main()
{
	int lines;
	char c;
	int freq[26]={0};
	size_t ctr, ctr2;
	
	int* max=freq;
	
	scanf("%d", &lines);
	getchar();
	for(ctr=0; ctr<lines; ctr++)
	{
		while((c=getchar())!='\n')
		{
			if(isalpha(c)){
				if(c>='a') freq[c-'a']++;
				else freq[c-'A']++;
			}
		}
	}
	
	for(ctr=0; ctr<26; ctr++)
	{
		for(ctr2=0; ctr2<26; ctr2++)
		{
			if(freq[ctr2]>*max) {
				max=&freq[ctr2];
			}
		}
		if(*max!=0) {
			printf("%c %d", max-freq+'A', *max);
			*max = 0;
			puts("");
		} else {
			break;
		}
		
	}
	

} 
