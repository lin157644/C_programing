#include <stdio.h>

int SumTwoArray(int[], int[]);

int main()
{
    int arr1[3], arr2[3];
    printf("Enter the first array(size 3):");
    scanf("%d%d%d", &arr1[0], &arr1[1], &arr1[2]);
    printf("Enter the second array(size 3):");
    scanf("%d%d%d", &arr2[0], &arr2[1], &arr2[2]);
    printf("The sum of two arrays is %d", SumTwoArray(arr1, arr2));
}

int SumTwoArray(int a[3], int b[3])
{
    int sum = 0;
    for(int i=0;i<3;i++)
    {
        sum += a[i];
        sum += b[i];
    }

    return sum;
}
