#include <stdio.h>

int multiply(float i, float j); // function declaration
// int add_fun(int i, int j);

int main() // main is also a function
{
    int i, j, result;
    printf("Please enter 2 numbers you want to multiply..."); // printf is also a fun
    scanf("%d%d", &i, &j);
    char x = 'a'; // scanf is also a fun

    result = multiply(i, j); // function call

    // result = i * j;
    printf("The result of muliplication is: %d", result);

    // int add;
    // add = add_fun(i, j);
    // printf("\nThe result of add is: %d", add);

    return 0;
}

/*This function multiplies two numbers and returns the result*/
int multiply(float i, float j)
{
    return (i * j); // function defintion, this can be done in one line
}