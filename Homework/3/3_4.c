#include <stdio.h>

int main()
{

    int n;

    printf("�п�J�~��N�X: ");


    while(scanf("%d", &n)!=EOF)
    {

        double m;
        int h;

        switch(n)
        {
            case 1:
                printf("�п�J�g�z�H���T�w�g�~: ");
                scanf("%lf", &m);
                printf("�Ӹg�z�H�����g�~��: %f\n", m);
                break;

            case 2:
                printf("�п�J���~�u�C�g�u�@�ɼ�: ");
                scanf("%d", &h);
                printf("�п�J�C�p�ɤu��: ");
                scanf("%lf", &m);
                printf("�Ӯ��~�u���g�~��: %lf\n", (h<=40)?(h*m):(40*m+(h-40)*1.5*m));
                break;

            case 3:
                printf("�п�J��g�P����B: ");
                scanf("%lf", &m);
                printf("�ӶĪ��u���g�~��: %.lf\n", 250+m*0.057);
                break;

            case 4:
                printf("�п�J�s�u�C�g�ҥͲ������: ");
                scanf("%d", &h);
                printf("�п�J�ҥͲ����~�����S��: ");
                scanf("%lf", &m);
                printf("�ӶĪ��u���g�~��: %.lf\n", m*n);
                break;

            default:
                break;

        }

        printf("�п�J�~��N�X: ");

    }

}
