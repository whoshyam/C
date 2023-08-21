#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"mustang", "corvette", "camero"};
    // cars[0]="tesla";
    strcpy(cars[0], "tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
}