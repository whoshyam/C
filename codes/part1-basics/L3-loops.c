#include <stdio.h>

int main()
{

    // for loop
    for (int i = 1; i <= 10; i++)
    {
        printf("test");
        printf("%d\n", i);
    }

    // while loop
    char name[];
    printf("\nwhats your name?:");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    whiel(strlen(name) == 0)
    {
        printf("\nwhats your name?:");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("hello %s", name);


    //do while loop
    int number = 0;
    int sum =0;
    
    do{
        printf("enter # above 0:");
        scanf("%d", number);
        if(number>0){
            sum+=number;
        }
        while(number>0);
    }
}