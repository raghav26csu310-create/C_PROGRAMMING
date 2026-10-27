#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter the %d element =", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
    }
    return 0;
}





#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter the %d element =", i);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 4; i >= 0; i--)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
        sum = sum + arr[i];
    }
    printf("\nthe sum is %d", sum);
    return 0;
}





#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter the %d element =", i);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int average;
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
        sum = sum + arr[i];
    }
    printf("\nthe sum is %d", sum);
    average = sum / 5;
    printf("\nthe average is %d", average);

    return 0;
}





#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter the %d element =", i);
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
        if (arr[i] > 50)
            count++;
    }
    printf("\nthe number of elements greater than 50 is %d", count);
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter the %d element =", i);
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
        if (arr[i] == 0)
            count++;
    }
    printf("\nthe number of elements greater than 50 is %d", count);
    return 0;
}
