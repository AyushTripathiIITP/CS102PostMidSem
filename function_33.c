#include <stdio.h>
#include <stdlib.h>

/* function declaration */
int max(int num1, int num2);
int main()
{
  system("cls");
  /* local variable definition */
  int a = 100;
  int b = 200;
  int ret;
  /* calling a function to get max value */
  ret = max(a, b); // Actual Arguments or Actual Parameters
  printf("Max value is : %d\n", ret);
  return 0;
}
/* function returning the max between two numbers */
int max(int num1, int num2) // Formal Arguments or Formal Parameters
{
  /* local variable declaration */
  int result;
  int x = 80;
  int c = 55;
  if (num1 > num2)
    result = num1;
  else
    result = num2;

  return result;
}