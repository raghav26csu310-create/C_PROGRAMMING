#include <stdio.h>

 int add(int a, int b) // fuction definition
{
    return a + b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = add(a, b);
     printf("%d", result); // function call back referencing
 }

 int add(int a, int b); // fuction declaration mandatory
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = add(a, b);
    printf("%d", result); // function call forward referencing
 }

 int add(int a, int b) // function definition
 {}

//we can not do call before declaration of function

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = add(a, b);
     printf("%d", result); // function call back referencing
 }

 int add(int a, int b) // fuction definition
{
    return a + b;
}
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = add(a, b);
    printf("%d", result); // function call back referencing
}

int add(int a, int b)
 {
    
 } // empty function afterwards doesnt work
