#include <stdio.h>

int multiply(int a, int b); // function declaration

int main()
{
    system("cls");
    int i, j, result;
    printf("Please enter 2 numbers you want to multiply...");
    scanf("%d%d", &i, &j);

    // result = multiply(i, j); // function call
    result = i * j;
    printf("The result of muliplication is: %d", result);

    return 0;
}

int multiply(int a, int b)
{
    return (a * b); // function defintion, this can be done in one line
}
