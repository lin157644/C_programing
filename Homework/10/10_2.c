#include <stdio.h>

typedef struct time Time;

struct time
{
    int hours;
    int minutes;
    double second;
};

int main()
{
    Time start = {12, 32, 25.49};
    Time end = {15, 12, 17.53};
    Time elapse = {end.hours-start.hours, end.minutes-start.minutes, end.second
    -start.second};



    printf("%d:%d:%2.2f\n", start.hours, start.minutes, start.second);
    printf("%d:%d:%2.2f\n", end.hours, end.minutes, end.second);

    if(elapse.second<0) {
        elapse.minutes--;
        elapse.second = 60 + elapse.second;
    }
    if(elapse.minutes<0) {
        elapse.hours--;
        elapse.minutes = 60 + elapse.minutes;
    }
    printf("%d:%d:%2.2f\n", elapse.hours, elapse.minutes, elapse.second);
}
