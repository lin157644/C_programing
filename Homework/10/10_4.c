#include <stdio.h>

void displayBits(unsigned int value)
{
    unsigned int mask = 1 << 31;
    for(int i=0; i<= 32; i++)
    {
        putchar( value&mask?'1':'0' );
        mask >>= 1;
    }
    puts("");
}

int main()
{
    unsigned int num, pow;
    printf("Please input num and pow...\n");
    scanf("%u%u", &num, &pow);
    displayBits(num);
    displayBits(num<<pow);
}
