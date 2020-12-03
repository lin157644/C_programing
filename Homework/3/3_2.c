#include <stdio.h>

int main()
{

    int n, sales;
    double a[5]={2.98, 4.5, 9.98, 4.49, 6.87};


    printf("請輸入產品編號: ");
    while(scanf("%d", &n)!=EOF)
    {

        printf("請輸入一天之內的銷售量: ");
        scanf("%d", &sales);

        printf("產品%d的銷售額是%lf元", n, sales*a[n-1]);

        printf("請輸入產品編號: ");

    }






}
