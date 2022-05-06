#include <stdio.h>
void display(int age1, int age2);

#include <stdlib.h>

int main()
{
    system("cls");
    int ageArray[] = {2, 8, 4, 12}; // 4 elements
    // int ageArray[]={0, 1, 2, 3};

    // Passing fourth and first elements to display()
    display(ageArray[3], ageArray[0]);
    // display(12, 2);
    return 0;
}

void display(int age1, int age2)
{
    printf("%d\n", age1);
    printf("%d\n", age2);
    printf("Sum of ages = %d\n", age1 + age2);
}