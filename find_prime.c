#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % 2 == 0)
            break;
    }
    if (n == i)
    {
        printf(" prime\n");
        return 0;
    }
    else
        printf("not Prime\n");
    return 0;
}