#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[] = "hello";
    char str3[5] = "hello";
    char str4[] = {'h', 'e', '\0', 'l', 'l', 'o', '\0'};
    printf("\n str1size=%d str1 len = %d str1 = %s", sizeof(str1), strlen(str1), str1);
    printf("\n str2size=%d str2 len = %d str2 = %s", sizeof(str2), strlen(str2), str2);
    printf("\n str3size=%d str3 len = %d str3 = %s", sizeof(str3), strlen(str3), str3);
    printf("\n str4size=%d str4 len = %d str4 = %s", sizeof(str4), strlen(str4), str4);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    int a;
    printf("\n enter score:");
    scanf("%d", &a);
    getchar();
    printf("\n enter the  string:");
    //  scanf("%s", str1);
    // scanf("%[^\n]s", str1);
    scanf("%19[^\n]s", str1);
    printf("\n score = %d \n string = %s", a, str1);
    return 0;
}
