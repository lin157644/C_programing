#include <stdio.h>

int main()
{
    double a=3;
    scanf("%lf",&a);
    printf("%11.3lfF\n",a);
    printf("%11.3lfC\n",5.0/9.0*(a-32));

}
