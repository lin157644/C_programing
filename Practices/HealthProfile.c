#include <stdio.h>

typedef struct HealthProfile HP;

struct HealthProfile{
    char lastname[50];
    char firstname[50];
    unsigned int gender;
    unsigned int year;
    unsigned int month;
    unsigned int day;
    float height;
    float weight;
};

void input(HP*);
void output(HP*);
float bmi(float, float);

int main()
{
    HP A;
    printf("It's a health profile!\n");
    input(&A);
    output(&A);
}

void input(HP*A)
{
    printf("Please input your lastname...\n");
    scanf("%s", (*A).lastname);
    printf("Please input your firstname\n");
    scanf("%s", (*A).firstname);
    printf("Please input your sex(0 for male/1 for female...)\n");
    scanf("%d", &(*A).gender);
    printf("Please input your birthday year...\n");
    scanf("%d", &(*A).year);
    printf("Please input your birthday month...\n");
    scanf("%d", &(*A).month);
    printf("Please input your birthday day...\n");
    scanf("%d", &(*A).day);
    printf("Please input your height(cm)\n");
    scanf("%f", &(*A).height);
    printf("Please input your weight(kg)\n");
    scanf("%f", &(*A).weight);
}

void output(HP*A)
{
    printf("lastname: %s firstname: %s\n", (*A).lastname, (*A).firstname);
    printf("sex: %s\n", (*A).gender?"female":"male");
    printf("birthday: %d/%d/%d\n", (*A).year, (*A).month, (*A).day);
    printf("height: %.0f weight: %.0f\n", (*A).height, (*A).weight);
    printf("BMI: %f\n", bmi((*A).height, (*A).weight));
}

float bmi(float h, float w)
{
    return w/h/h*10000;
}
