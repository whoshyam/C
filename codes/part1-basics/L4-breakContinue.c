#include <stdio.h>

int main()
{

    // continue = skips rest of code & forces iteration of loop
    // breaks = exists a loop or switch

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        { // i=13 ko chor ke sab print hojaega
            continue;
        }

        if (i == 17)
        { // jab i=17 hoga tb loop se bahar aajaega ar baki loop aage nhi badega
            break;
        }
        printf("%d\n", i);
    }
}