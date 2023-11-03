#include <stdio.h>
#include <math.h>

int main()
{
    // print statement
    printf("i like pizza -- hey\n"); // print literraly double quote
    printf("\"i like pizza\"-- hey\n");

    // variables
    //  way to print data type value in print statement
    int age = 21;
    float gpa = 2.05;
    char grade = 'c';
    char name[] = "bro"; // array of characters ie string

    printf("Hello %s\n", name);
    printf("you are %d years old\n", age);
    printf("your avg grade is %c\n", grade);
    printf("your gpa is %f\n", gpa);

    // data types
    float c = 3.141592653589793;  // 4 bytes  %f
    double d = 3.141592653589793; // 8 bytes %lf

    printf("%f\n", c);
    printf("%lf\n", d);
    // o/p 3.141592 default set of digit

    printf("%0.15f\n", c); // to display 15 digit after decimal
    // 3.141592741012573
    // lose data after 3.141592
    printf("%0.15lf\n", d);
    // 3.141592653589793
    //  double is more precisise but cost more memory

    // bool e = true; //%d

    char a = 'C';          // %c
    char f = 120;          // 1 byte (-128 to +127)
    unsigned char g = 225; // 1 byte ( 0 tp +255) %d or %c

    // format specifer
    //%.1 = decimal precision
    //%1 = minium field width
    //%- =left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1: $%.2f\n", item1);
    printf("item 1: $%.2f\n", item2);
    printf("item 1: $%.2f\n", item3);
    // item 1: $5.75
    // item 1: $10.00
    // item 1: $100.99

    printf("item 1: $%8.2f\n", item1);
    printf("item 1: $%8.2f\n", item2);
    printf("item 1: $%8.2f\n", item3);
    // item 1: $    5.75
    // item 1: $   10.00
    // item 1: $  100.99

    // constants: fixed value that cannot be altered
    const float pi = 3.14159;
    // pi = 233 // this cannot be done now
    printf("%f\n", pi);

    // operators

    int x = 5;
    int y = 2;
    float z = x / y;         // z=2
    float z1 = x / (float)y; // z=2.500000
    printf("%f", z);

    int v = x % y; // remainder
    printf("%d", z);

    int value = 10;
    // value = value + 2;
    value += 2;

    // user input

    char name1[25];
    int age1;

    printf("\nwhat's your name1?\n");
    scanf("%s", &name1); // use input for single world ex shyam or ram but not shyam kumar
    // so to get multiple word user input we use ..
    fgets(name1, 25, stdin); // fgets(variableName, limit, stdin);

    printf("\nHow old are you?");
    scanf("%d", &age1);

    printf("Hello %s,how are you\n", name1);
    printf("you are %d years old\n", age1);

    // math functions

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);   // round to 3
    int D = ceil(3.14);    // round to 4
    int E = floor(3.99);   // round to3
    double F = fabs(-100); // absolute value
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    return 0;
}