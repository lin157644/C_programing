#include <stdio.h>

int main()
{
    float weight, height;

    scanf("%f%f",&weight,&height);
    weight=weight/height/height;
    printf("%f\n",weight);

    if(weight<18.5) printf("�L��");
    else if(weight<30) printf("���`");
    else printf("�L��");
}
