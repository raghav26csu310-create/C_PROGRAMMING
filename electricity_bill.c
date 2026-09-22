#include <stdio.h>
int main()
{
    int bill, units;
    printf("the units consumed:");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 2;
    }
    else if (units <= 200)
    {
        bill = 200 + (units - 100) * 3;
    }
    else
    {
        bill = 500 + (units - 200) * 5;
    }

    printf("%d", bill);
    
    return 0;
}
