#include <stdio.h>

/*enum Gender{
    MALE;
    FEMALE;
};*/
struct HealthProfile
{
    char* lastName;
    char* firstName;
    char* gender;
    unsigned int year : 12;
    unsigned int month : 4;
    unsigned int day : 5;
    unsigned float height;
    unsigned float weight;
};

double BMI(struct HealthProfile);

int main()
{
    struct HealthProfile h;
    printf("Enter Lastname FirestName Gender Birthday Height Weight");
    scanf("%s%s%s%d%d%d%f%f", h.lastName, h.firstName, h.gender, h.year, h.month, h.day, h.height, h.weight);
    printf("%d%lf", 2020-h.year, BMI(h));
}

double BMI(struct HealthProfile h)
{
    return h.weight/h.height/h.height*10000;
}
