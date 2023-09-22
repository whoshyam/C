#include <stdio.h>

void hello(char[], int); // function prototype

inr main()
{
    // function prototype --- function declartion,w/o a body, before main()
    // ensures that calls to a function are made with the correct arguments
    // many c compilers do not check for parameter matching
    // missing argguments will result in unexpected behavior
    // fn prototype causes the compiler to flag error if arguments are missing

    char name[] = "bro";
    int age = 21;

    hello(name);
    // calling hello fn with only one argument where 2 are required
    // instead of warning we will get error ki kuch glti ki h
    // agar fn prototype nhi hoga th warning aaega but code run hojaega ar unexpected output hoga

    // hello(name, age);
    // now it will run errorless

    return 0;
}

void hello(char name[], name)
{
    printf("\nhello %s", name);
    printf("\nyou are %d years old", age);
}
