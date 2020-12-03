#include <stdio.h>

int main()
{

    int n;

    printf("請輸入薪資代碼: ");


    while(scanf("%d", &n)!=EOF)
    {

        double m;
        int h;

        switch(n)
        {
            case 1:
                printf("請輸入經理人員固定週薪: ");
                scanf("%lf", &m);
                printf("該經理人員的週薪為: %f\n", m);
                break;

            case 2:
                printf("請輸入時薪工每週工作時數: ");
                scanf("%d", &h);
                printf("請輸入每小時工資: ");
                scanf("%lf", &m);
                printf("該時薪工的週薪為: %lf\n", (h<=40)?(h*m):(40*m+(h-40)*1.5*m));
                break;

            case 3:
                printf("請輸入當週銷售金額: ");
                scanf("%lf", &m);
                printf("該傭金工的週薪為: %.lf\n", 250+m*0.057);
                break;

            case 4:
                printf("請輸入零工每週所生產的件數: ");
                scanf("%d", &h);
                printf("請輸入所生產產品的單件酬勞: ");
                scanf("%lf", &m);
                printf("該傭金工的週薪為: %.lf\n", m*n);
                break;

            default:
                break;

        }

        printf("請輸入薪資代碼: ");

    }

}
