#include <stdio.h>

int main()
{

    int n, sales;
    double a[5]={2.98, 4.5, 9.98, 4.49, 6.87};


    printf("�п�J���~�s��: ");
    while(scanf("%d", &n)!=EOF)
    {

        printf("�п�J�@�Ѥ������P��q: ");
        scanf("%d", &sales);

        printf("���~%d���P���B�O%lf��", n, sales*a[n-1]);

        printf("�п�J���~�s��: ");

    }






}
