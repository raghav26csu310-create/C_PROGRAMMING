// C program for making a calculator using switch
#include <stdio.h>
int main()
{
    int a, b;
    char o;
    printf("enter the first number:");
    scanf("%d", &a);

    printf("enter the  second number:");
    scanf("%d", &b);

    printf("choose what operator to use:");
    scanf(" %c", &o);
    switch (o)
    {
    case '1':
    case '+':
    case 'a':
        printf("\nthe result is %d", a + b);
        break;
    case '2':
    case '-':
    case 's':
        printf("\nthe result is %d", a - b);
        break;
    case '3':
    case '*':
    case 'm':
        printf("\nthe result is %d", a * b);
        break;
    case '4':
    case '/':
    case 'd':
        printf("\nthe result is %d", a / b);
        break;
    default:
        printf("\n invalid choice");
    }
    return 0;
}