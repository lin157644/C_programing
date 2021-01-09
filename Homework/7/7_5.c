#include <stdio.h>

typedef void (*MODE)(double, double);
//arithmetic
void plus(double, double);
void minus(double, double);
void multiply(double, double);
void divide(double, double);
int main()
{
    MODE oper[4]={plus, minus, multiply, divide};

    while(1)
    {
        int temp;
        double a, b;
        printf("Enter a number between 0 to 3(+,-,*,/), -1 to end:");
        scanf("%d", &temp);
        if(temp==-1) {
            printf("Program End!");
            break;
        }
        printf("Input two numvers to do the operand: ");
        scanf("%lf%lf", &a, &b);
        (*oper[temp])(a, b);
    }

    return 0;
}

void plus(double a, double b)
{
    printf("%lf + %lf = %lf\n\n", a, b, a+b);
}
void minus(double a, double b)
{
    printf("%lf - %lf = %lf\n\n", a, b, a-b);
}void multiply(double a, double b)
{
    printf("%lf * %lf = %lf\n\n", a, b, a*b);
}void divide(double a, double b)
{
    printf("%lf / %lf = %lf\n\n", a, b, a/b);
}
