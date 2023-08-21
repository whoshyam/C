#include <stdio.h>

int main()
{
    // array= DS that can store many values of the same data types

    double prices[] = {5.0, 10.0, 25, 20};
    printf("$%.2lf\n", prices[0]);
    printf("$%.2lf\n", prices[1]);
    printf("$%.2lf\n", prices[2]);
    printf("$%.2lf\n", prices[3]);

    double prices1[5];
    prices1[0] = 5.0;
    prices1[1] = 5.0;
    prices1[2] = 5.0;

    for (int i = 0; i < 5; i++)
    {
        printf("%lf\n", prices[i]);
    }

    // array with loop
    double prices2[] = {5.0, 10.0, 15, 25, 20};
    for (int a = 0; a < 5; a++)
    {
        printf("$%.2lf\n", prices[a]);
    }
    for (int a = 0; a <sizeof(prices2)/sizeof(prices[0]);a++)
    {
        printf("$%.2lf\n", prices[a]);
    }

    return 0; 
}