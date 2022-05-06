#include <stdio.h>

/* function declaration */
double getAverage(int arr[], int size);
#include <stdlib.h>

int main()
{
    system("cls");

    /* an int array with 5 elements */
    int balance[3000] = {1000, 2, 3, 17, 50};

    double avg_3;

    /* pass pointer to the array as an argument */
    avg_3 = getAverage(balance, 5);

    /* output the returned value */
    printf("Average value is: %f ", avg_3);

    return 0;
}

/*fUNCTION Definition*/
double getAverage(int arr[], int size)
{

    int i;
    double avg;
    double sum = 0;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = sum / size;

    return avg;
}