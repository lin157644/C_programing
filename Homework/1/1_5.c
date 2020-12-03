#include <stdio.h>

int main()
{
    float weight, height;

    scanf("%f%f",&weight,&height);
    weight=weight/height/height;
    printf("%f\n",weight);

    if(weight<18.5) printf("過輕");
    else if(weight<30) printf("正常");
    else printf("過重");
}
