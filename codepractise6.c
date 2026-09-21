#include <stdio.h>
int main()
// {
//     int a = 10;
//     int b;
//     ++a;
//     printf("%d\n", a);
//     b = a++;
//      printf("%d , %d", a, b);
//      return 0;

// }
// {
//     int a = 5;
//     int b;
//     printf("%d\n", a++);
//     b = a++;
//     printf("%d", a+++b);
//     return 0;
// }
{
    int a = 10;
    int j;
    printf("\n a = %d\t j= %d", a, j);
    --a;
    a++;
    j = a++;
    --j;
    printf("\n a= %d\t j= %d", a, j);
    return 0;
}