#include <stdio.h>
// #include <limits.h>
//int main()

//     int var = 3;
//     var = 4;
//     printf("%d", var);
// }
// {
//     int var1 = 3;
//     int var2, var3;
//    var3 = var2 = var1;
//     printf("%d %d", var2, var3);
// }
// {
//     int two = 2, three = 3, six = 6;
//     int result = (two + three)*six/three;
//     printf("i am new to coding but i know calculations like this: (%d + %d)* %d / %d ", two, three, six, three);
//     printf("and the answer to the above problem is: %d", result);
// }
// {
//     printf("%d", sizeof(double));
// }
    // {
    //     short int var = SHRT_MIN;
    //     int var1 = SHRT_MAX;
    //     printf("the range of unsigned integer is from %d to %d ", var, var1);
    //     return 0;
    // }
// {
//     char var = -127;
//     printf("%c", var);
//     return 0;
// }
// {
//     float var1 = 3.14592;
//     double var2 = 3.14592;
//     long double var3 = 3.14592;
//     printf("%d\n", sizeof(float));
//     printf("%.16f\n", var1);
//     printf("%.16lf\n", var2);
//     printf("%.21Lf\n", var3);
//     return 0;
// }
// {
//     int var = 4/9;
//     printf("%d\n", var);
//     float var1 = 4/9;
//     printf("%.2f\n", var1);
//     float var2 = 4.0/9.0;
//     printf("%.2f\n", var2);
//     return 0;
// }
// {
//     printf("%d\n", printf("%s", "hello world"));
//     printf("%s\n", "hello");
//     printf("%10s", "hello");
//     return 0;
// }
// {
//     char c = 255;
//     c = c + 10;
//     printf("%d", c);
//     return 0;
// }
// {
//     unsigned i = 1;
//     int j = -4;
//     printf("%u", i + j);
//     return 0;
// }
// {
//     int var = 3;
//     {
//         int var = 4;
//         printf("%d\n", var);
//     }
//     printf("%d", var);
//     return 0;
// }
int fun();

int var = 10;

int main()
{
    int var = 3;
    printf("%d\n", var);
    fun();
    return 0;
}

int fun()
{
    printf("%d", var);
}