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
    for (int a = 0; a < sizeof(prices2) / sizeof(prices[0]); a++)
    {
        printf("$%.2lf\n", prices[a]);
    }

    return 0;
}

// There is no array.length for C arrays.

// int arr[]={1,2,3,5,100};

// sizeof(arr) / sizeof(arr[0]) mean

// sizeof(arr)
// printf(sizeofarr); // ie 4byte*5=20byte

// sizeof(arr[0])
// gives the number of bytes occupied by one element in the array. You could use any index as for example
// printf(sizeof(arr[0]));  // ie 4byte

// sizeof(arr) / sizeof(arr[0]) = 5*4 / 4 = 10, and it is the length of the array.
