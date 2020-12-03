#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void rightAns();
void wrongAns();

int main()
{

    int n, a, b, cor;

    srand(time(NULL));

    while(1)
    {

        for(int i=0; i<10; i++)
        {
            a=rand()%10;
            b=rand()%10;

            printf("How much is %d times %d?\n", a, b);

            scanf("%d", &n);

            if(n==a*b)
            {
                rightAns();
                cor++;
            }
            else wrongAns();

        }

        if(cor<8)
        {
            printf("Please ask your teacher for extra help.\n");
        }else
        {
            printf("Congratulations, you are ready to go to the next level!\n");
        }


    }

}

void rightAns()
{
    switch(rand()%5)
    {
    case 1:
        printf("Very good!\n");
        break;

    case 2:
        printf("Excellent!\n");
        break;

    case 3:
        printf("Nice work!\n");
        break;

    case 4:
        printf("Keep up the good work!\n");
        break;

    }
}

void wrongAns()
{
    switch(rand()%5)
    {
    case 1:
        printf("No. Please try again.\n");
        break;

    case 2:
        printf("Wrong. Try once more.\n");
        break;

    case 3:
        printf("Don¡¦t give up!\n");
        break;

    case 4:
        printf("No. Keep trying.\n");
        break;

    }
}
