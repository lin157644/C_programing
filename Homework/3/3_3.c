#include <stdio.h>

int main()
{

    int y, m, d;
    int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Please input year,month,day\n");

    while(scanf("%d%d%d",&y ,&m ,&d)!=EOF)
    {

        if((!(y%4)&&(y%100))||!(y%400))
        {
            d += 1;
        }

        for(int i=0; i<m-1; i++)
        {
            d+=days[i];

        }


        printf("This is the %dth day.\n",d);

        printf("Please input year,month,day\n");
    }


}
