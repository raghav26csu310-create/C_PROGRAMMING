//C program to find which number is greater using relational operator and if-else
#include <stdio.h>
int main()
// {
//     int a,b;
//     printf("enter the first number:");
//     scanf("%d", &a);
//     printf("enter the second number:");
//     scanf("%d", &b);
//     if (a > b)
//         printf("%d is greater", a);
//     else if (a == b)
//         printf("both are equal");
//     else
//         printf("%d is greater", b);
//     return 0;
// }




//C program to find number is positive or negative using relational opeartor and if-else
// {
//     int a;
//     printf("enter the number:");
//     scanf("%d", &a);
//     if (a >= 0)
//         printf("the value %d is positive", a);
//     else
//         printf("the value %d is negetive", a);
//     printf("\nthe sign of value is determined successful");
//     return 0;
// }




//C program to find number is odd or even using relational operator and if-else
// {
//     int a;
//     printf("enter a number:");
//     scanf("%d", &a);
//     if(a % 2 == 0)
//         printf("%d is an even number", a);
//     else
//         printf("%d is an odd number", a);
//     return 0;
// }




//C program to make a discount calculator using relational operator and if-else
// {
//     float bill, pay;
//     printf("enter the amount of purchased goods:");
//     scanf("%d", &bill);
//     if (bill >= 5000)
//     {
//         pay = bill - bill / 10;
//         printf("congrats you have received 10 %% dicount");
//         printf("\namount after discount is %f * 0.9 = %f", bill, pay);
//     }
//     else
//     {
//         printf("sorry you have to pay full amount");
//         pay = bill;
//         printf("\namount to pay = %f", pay);
//     }
// return 0;
// }




//
// {
//     int num;
//     printf("enter the number:");
//     scanf("%d", &num);
//     if(num > 0)
//     printf("the number is positive");
//     else if(num == 0)
//     printf("number is zero");
//     else
//     printf("the number is negative");
//     return 0;
// }
// {
//     int a,b;
//     printf("enter the first  number: ");
//     scanf("%d", &a);
//     printf("enter the second number: ");
//     scanf("%d", &b);
//        if(a>b)
//           printf("%d is greater than %d", a, b);
//        else if(a == b)
//           printf("both are equal");
//         else
//           printf("%d is greater than %d", b, a);
//     return 0;
// }
{
    int a,b;
    printf("enter the first  number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
       if(a>b)
          printf("%d is greater than %d", a, b);
       if(a == b)
          printf("both are equal");
       if(a<b)
          printf("%d is greater than %d", b, a);
    return 0;
}
