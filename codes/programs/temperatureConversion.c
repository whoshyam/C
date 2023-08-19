#include <stdio.h>
#include <ctype.h>

int main()
{

    char unit;
    float temp;

    printf("\nIs the temperature in (f) or(C)?: ");
    scanf("%c", &unit);

    if (unit == 'C')
    {
        printf("\nenter the temp in celius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nthe temp in farenheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nenter the temp in farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nthe temp in celius is: %.1f", temp);
    }
    else
    {
        printf("\n %c is not a valid unit of measurement", unit);
    }

    return 0;
}