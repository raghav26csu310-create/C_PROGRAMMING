//C program for making a student profile using printf and scanf
#include <stdio.h>
int main()
// {
//     char name[50];
//     int age;
//     float height;
//     char grade;
//     printf("enter your name:");
//     scanf("%s", &name);
//     printf("\nenter your age:");
//     scanf("%d", &age);
//     printf("\nenter your height:");
//     scanf("%f", &height);
//     printf("\nenter your grade:");
//     scanf(" %c", &grade);
//     printf("\n-----Student Profile-----\n");
//     printf("Name:%s\n", name);
//     printf("Age:%d\n", age);
//     printf("Height:%f\n", height);
//     printf("grade:%c\n", grade);
//     printf("--------------------------");
//     return 0;
// }




//C program for for making a basic calculator using printf and scanf
{
    int first, second;
    printf("enter the first number:");
    scanf("%d", &first);
    printf("enter the second number:");
    scanf("%d", &second);
    printf("first number:%d", first);
    printf("second number:%d\n\n", second);
    int add = first + second;
    printf("sum:%d\n", add);
    int difference = first - second;
    printf("difference:%d\n", difference);
    int product = first * second;
    printf("product:%d\n", product);
    int quotient = first / second;
    printf("quotient:%d\n", quotient);
    return 0;
}