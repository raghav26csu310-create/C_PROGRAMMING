#include <stdio.h>
int main()
{
     int arr[5] = {1, 12, 22, 23, 56};// when elements are equal to the array value
     int arr[5] = {};// when array element box empty all values become zero
     int arr[5] = {1, 2, 3, 4, 5, 6, 7};// when elements greater than array value
     int arr[5] = {1, 2, 3};// when elements are less than array value
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter the %d element =", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nthe i =%d   the array =%d  ", i, arr[i]);
    }
    return 0;
}
