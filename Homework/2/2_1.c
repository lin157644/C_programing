#include <stdio.h>

int main()
{
    while(1)
    {
        double a;
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf",&a);
        printf("Salary is:%.2lf\n\n",200+0.09*a);

    }
}
