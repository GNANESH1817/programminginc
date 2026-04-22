#include <stdio.h>

void changeValue(int x)
{
    x = x + 10;
    printf("Inside function: x = %d\n", x);
}

int main()
{
    int num = 5;

    printf("Before function call: num = %d\n", num);

    changeValue(num); // pass by value

    printf("After function call: num = %d\n", num);

    return 0;
}