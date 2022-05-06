//https://www.geeksforgeeks.org/wp-content/uploads/Function-Prototype-in-c.png
#include <stdio.h>
// function prototype, also called function declaration
float cube(float x);
float sqaure_fun(float x);
void add_two(float x);

// main function, program starts from here

int main()
{
    float inp_number, squared_value, cube_value;
    printf("\nEnter some number for finding square and cube \n");
    scanf("%f", &inp_number);
    // function call
    squared_value = sqaure_fun(inp_number);
    cube_value = cube(inp_number);

    printf("\nSquare of the given number %f is %f", inp_number, squared_value);
    printf("\nCube of the given number %f is %f", inp_number, cube_value);
}

void add_two(float x)
{
    printf("The number after adding 2 to it is %f", x + 2);
}

float sqaure_fun(float x)
// function definition
{
    float p;
    p = x * x;
    add_two(x);
    return (p); //return (225);
}

float cube(float x)
// function definition
{
    float p;
    p = x * x * x;
    return (p); //return (225);
}

/* 
#include<stdio.h>

int multiply(int a, int b);     // function declaration

int main() 
{
    int i, j, result;
    printf("Please enter 2 numbers you want to multiply...");
    scanf("%d%d", &i, &j);
    
    result = multiply(i, j);        // function call
    printf("The result of muliplication is: %d", result);
    
    return 0;
}

int multiply(int a, int b)
{
    return (a*b);       // function defintion, this can be done in one line
} */