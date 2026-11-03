#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100], i, j;
    printf("enter the string:");
    fgets(str, sizeof(str), stdin);
    for (i = strlen(str) - 1, j = 0; i >= 0; i--, j++)
        ;
    {
        str2[j] = str[i];
    }
    str2[i] = '\0';
    printf("\nstring original:%s", str);
    printf("\nstring reversed:%s", str2);

    return 0;
}