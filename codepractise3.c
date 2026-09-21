 #include <stdio.h>
//  int d = 24;
//  int main()
//  {
//     extern int d;
//     printf("%d", d);
//     return 0;
//  }
/*int increment();
extern int count;
int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();
    value = count * 2;
    printf("%d", value);
    return 0;
}*/
// # define add(x,y) x + y
// int main()
// { 
//     printf("the sum of the addition is %d", add(3,4));
//     return 0;
// }
// # define greater(x,y) if(x>y) \
// printf("%d is greater than than %d", x,y); \
// else \
// printf("%d is lesser than %d", x,y);
// int main()
// { 
//     greater(5,6);
//     return 0;
// }
// # define add(x,y) x + y
// int main()
// {
//     printf("the sum of expression a*b + c is %d", 5 * add(3,4));
//     return 0;
// }
// int main()
// {
//     printf("DATE: %s\n", __DATE__);
//     printf("TIME: %s\n", __TIME__);
//     return 0;

// }
// int main()
// {
//     int var = 052;
//     printf("%o", var);
//     return 0;
// }
int main()
{
    int a, b;
    printf("enter the first number \n");
    scanf("%d", &a);
    printf("enter the second number \n");
    scanf("%d", &b);
    printf("the result of sum of given numbers is %d + %d = %d", a, b,a+b );
    return 0;
}
// static int i;
// static int i = 27;
// static int i;
// int main()
// {
//     static int i;
//     printf("%d", i);
//     return 0;

// }