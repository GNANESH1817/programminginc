#include <stdio.h>
int main()
{
    int numbers[4] = {10, 20, 30, 40};
    printf("%d\n", numbers[0]);
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}