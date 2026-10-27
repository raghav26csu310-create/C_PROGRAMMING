#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter the %d element =", i);
        scanf("%d", &arr[i]);
    }
    int max;
    int min;
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
        {
            max = arr[0];
            if (arr[i] > max)
                max = arr[i];
        }
        {
            min = arr[0];
            if (arr[i] < min)
                min = arr[i];
        }
    }
    printf("\nthe max is %d \nthe min is %d", max, min);
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

    int max;
    int min;
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
        {
            max = arr[0];
            if (arr[i] > max)
                max = arr[i];
        }
        {
            min = arr[0];
            if (arr[i] < min)
                min = arr[i];
        }
           printf("\nthe max is %d \nthe min is %d", max, min);

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= average)
            count++;
    }
    printf("\nthe number of students above average is %d", count);
    return 0;
}
}