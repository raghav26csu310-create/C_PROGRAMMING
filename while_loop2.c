// C program using while and break
#include <stdio.h>
int main()
// {
//     int n;
//     printf("enter the integer:");
//     scanf("%d", &n);

//     while(n != 0)
//     {
//         if (n < 0)
//         break;

//         printf("enter the integer:");
//         scanf("%d", &n);
//     }
// }




{
    int i, n = 2;
    for (i = 1; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }

        printf("%d", i);
    }
    return 0;
}