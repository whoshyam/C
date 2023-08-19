#include <stdio.h>;
#include <stdbool.h>; // for boolean variable

int main()
{

    conditionals if else int age;
    printf("\nenter your age:");
    scanf("%d, &age");

    if (age >= 18)
    {
        printf("you are signed up!");
    }
    else if (age == 0)
    {
        printf("no sign up");
    }
    else if (age < 0)
    {
        printf("yet to born");
    }
    // sequencce wise if ya else if ya dusra else if ka contion meet hogya th uske baad ke condition ko check nhi hoga
    else
    {
        printf("you are too young");
    }

    Switches
        alternative of else if

        char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perfect\n");
        break;
    case 'B':
        printf("good\n");
        break;
    case 'C':
        printf("average\n");
        break;
    case 'D':
        printf("below average\n");
        break;
    case 'F':
        printf("Fail\n");
        break;

        // use of break because agar koi case match hogya th usse execute karo ar switch se bahar aajao
    }

    logical operators AND &&, OR ||, NOT !float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny == true)
    { //&& --> ||
        printf("\nThe weather is good");
    }
    else
    {
        printf("\nthe weather is bad");
    }
}