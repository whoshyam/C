#include<stdio.h>

int findmax(int x, int y)
{
    return (x > y) ? x: y;
}

int main(){
    //ternary oper= shortcut to if else when assigning returning a value
    //(condition) ? value if true : value if false

    int max = findmax(3,4);
    printf("%d", max);
    return 0;
}