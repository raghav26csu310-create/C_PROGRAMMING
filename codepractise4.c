 #include <stdio.h>
int main()
{
    int a, b;
    printf("enter your first number:\n");
    scanf("%d", &a);
    printf("enter your second number:\n");
    scanf("%d", &b);

    printf("a/b = %d\n", a/b);
    printf("a %% b = %d\n", a%b);
    return 0;
}




 #include <stdio.h>
int main()
{
 int a = 4, b = 3;
printf("%d", a+++b);
return 0;
}




 #include <stdio.h>
 int maain()
{
    int a = 300, b = 2090;
    if (a>=b)
    printf("bingo!");
    else
    printf("oops!");
    return 0;
}




 #include <stdio.h>
 int main()
{
    int a = 5;
    if (a > 5 || a == 6 || a >= 56 || a < 4)
    printf("congratulations");
    else
    printf("sad");
    return 0;
}




 #include <stdio.h>
 int main()
{ int a = 5;
if (!(a == 6))
printf("yay");
return 0;
}




#include <stdio.h>
 int main()
{ 
     int a = 5, b = 3;
    int incr;
    incr = (a<b) || (a>b);
    printf("%d\n", incr),
    printf("%d", b);
    return 0;
}




#include <stdio.h>
 int main()
{
    char x = 1, y = 2;
    if (x&y)
    printf("result is 1");
    if(x&&y)
    printf("result is 2");
    return 0;
}




#include <stdio.h>
 int main()
{
    char var = 3;
    printf("%d", var<<5);
    return 0;
}




#include <stdio.h>
 int main()
{
    char var = 20;
    printf("%d", var>>2);
    return 0;
}




#include <stdio.h>
int main()
{
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after xor, a = %d and b = %d", a,b);
    return 0;
}