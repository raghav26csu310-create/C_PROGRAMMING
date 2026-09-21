// C program for checking greatest number using if-else
#include <stdio.h>
int main()
// {
//     int a, b, c;
//     printf("enter the number:");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b && a > c)
//         printf("a is  greatest");

//     if (b > a && b > c)
//         printf("b is  greatest");

//     if (c > a && c > b)
//         printf("c is greatest");

//     return 0;
// }


// {
//     int a, b, c;
//     printf("enter the number:");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b && a > c)
//         printf("a is  greatest");

//     else if (b > a && b > c)
//         printf("b is  greatest");

//     else
//         printf("c is greatest");

//     return 0;
// }


// {
//     int a, b, c;
//     printf("enter the number:");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a == b && b == c)
//         printf("all are equal");

//     else if (a > b)
//     {
//         if (a > c)
//             printf("a is greatest");

//         else
//             printf("c is greatest");
//     }
//     else
//     {
//         if (b > c)
//             printf("b is greatest");

//         else
//             printf("c is greatest");
//     }
//     return 0;
// }




//C program to check if a number is in a particular range using logical operators
// {
//     int a;
//     printf("enter the number:");
//     scanf("%d", &a);

//     if (a >= 10 && a <= 50)
//         printf("number %d is in range", a);

//     else
//         printf("number %d is not in range", a);

//     return 0;
// }


{
    int a;
    printf("enter the number:");
    scanf("%d", &a);

    if (a < 10 || a > 50)
        printf("number %d is not in range", a);

    else
        printf("number %d is in range", a);

    return 0;
}