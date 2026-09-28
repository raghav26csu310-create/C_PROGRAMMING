// C program using for loop
#include <stdio.h>
int main()
// {
//     int i = 1024;
//     for (; i; i >>= 1)
//         printf("hello, world");
//     return 0;
// }

// {
//     int i;
//     for (i = 0; i < 20; i++)
//     {
//         switch (i)
//         {
//         case 0:
//             i += 5;
//         case 1:
//             i += 2;
//         case 5:
//             i += 5;
//         default:
//             i += 4;
//         }
//         printf("%d", i);
//     }
//     return 0;
// }

// {
//     int i = -5;

// while(i <= 5)
// {
//     if(i >= 0)
//         break;
//     else
//     {
//         i++;
//         continue;
//     }

//     printf("Neso");
// }
// }

// {
//     int i = 0;

//     for (printf("one\n"); i < 3 && printf(""); i++)
//     {
//         printf("Hi!\n");
//     }
// }
// {
//     unsigned int i = 500;

//     while (i++ != 0);

//     printf("%d", i);
// }

// {
//     int x = 3;

//     if (x == 2);
//     x = 0;

//     if (x == 3)
//         x++;
//     else
//         x += 2;

//     printf("X = %d", x);
// }

// {
//     int i, sum;
//     for (i = 1, sum = 0; i <= 10; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%d", sum);
//     return 0;
// }

// {
//     int i, sum;
//     for (i = 1, sum = 0; i <= 10; i++)
//     {
//         sum = sum + i * i;
//     }
//     printf("%d", sum);
//     return 0;
// }

{
    int i, n;
    scanf("%d", &i);
    for (n = 1; n <= 10; n++)
    {
        printf("\n%d * %d = %d", i, n, i * n);
    }
    return 0;
}
