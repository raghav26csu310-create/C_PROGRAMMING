//Different C programs to make a basic calculator for arithmetic operations
#include <stdio.h>
int main()
// {
//     int a, b;
//     int o;
//     printf("enter the first number:");
//     scanf("%d", &a);

//     printf("enter the  second number:");
//     scanf("%d", &b);

//     printf("choose what operator to use:\n1-add\n2-sub\n3-mul\n4-div\n");
//     scanf("%d", &o);

//     if (o == 1)
//         printf("the result is %d", a + b);
//     if (o == 2)
//         printf("the result is %d", a - b);
//     if (o == 3)
//         printf("the result is %d", a * b);
//     if (o == 1)
//         printf("the result is %d", a / b);
//     return 0;
// }


{
    int a, b;
    int o;
    printf("enter the first number:");
    scanf("%d", &a);

    printf("enter the  second number:");
    scanf("%d", &b);

    printf("choose what operator to use:\n1-add\n2-sub\n3-mul\n4-div\n");
    scanf("%d", &o);

    if (o == 1)
        printf("the result is %d", a + b);
    else if (o == 2)
        printf("the result is %d", a - b);
    else if (o == 3)
        printf("the result is %d", a * b);
    else if (o == 4)
        printf("the result is %d", a / b);
    else
        printf("invalid choice");
    return  0;
}