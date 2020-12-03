#include <stdio.h>
#include <stdlib.h>

int testPalindrome(char[], int);

int main()
{
    char *str=malloc(100*sizeof(char));
    char temp;
    size_t n=0;

    temp=getchar();
    while(temp!='\n')
    {
        switch(temp){
            case ' ':
                break;
            case ',':
                break;
            default:
                str[n]=temp;
                n++;
        }
        temp=getchar();
    }
    printf("%d",testPalindrome(str, n-1));


}

int testPalindrome(char str[], int len)
{
    for(int i=0;i<(len-1)/2;i++){
        if(str[i]!=str[len-i]) {
            return 0;
        }
    }
    return 1;
}
