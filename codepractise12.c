//different types of C program to check how a logical operator can change the output in if-else code
#include <stdio.h>
int main()
// {
//     int a=10, b=5;
//     if(++a>10 || ++b>5);
//     printf("%d %d", a,b);
//     return 0;
// }


// {
//     int a=10, b=5;
//     if(++a>10 && ++b>5);
//     printf("%d %d", a,b);
//     return 0;
// }


// {
//     int a = 10, b = 5;
//     if (++a < 10 && ++b > 5);
//     printf("%d %d", a, b);
//     return 0;
// }


{
    int a = 10, b = 5;
    if (++a < 10 || ++b > 5);
    printf("%d %d", a, b);
    return 0;
}