#include <stdio.h>

typedef struct date Date;

struct date
{
    int year;
    int month;
    int day;
};

int main()
{
    struct date holiday = {2004, 4, 26};

    Date festival;

    scanf("%d%*c%d%*c%d", &festival.year, &festival.month, &festival.day);
    printf("%02d/%02d/%4d\n",festival.month, festival.day, festival.year);
    printf("%02d/%02d/%4d",holiday.month, holiday.day, holiday.year);
}
