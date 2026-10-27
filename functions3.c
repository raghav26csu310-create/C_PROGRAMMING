// Different C programs to swap values of 2 variables
#include <stdio.h>
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 24, y = 67;
    printf("\n before swapping x = %d  y = %d", x, y);
    swap(x, y);
    printf("\n after swapping x = %d  y = %d", x, y);
}

#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int x = 24, y = 67;
    printf("\n before swapping x = %d  y = %d", x, y);
    swap(&x, &y);
    printf("\n after swapping x = %d  y = %d", x, y);
}

#include <stdio.h>
void swap(int *xp, int *yp)
{
    *xp = *xp + *yp;
    *yp = *xp - *yp;
    *xp = *xp - *yp;
}

int main()
{
    int x = 24, y = 67;
    printf("\n before swapping x = %d  y = %d", x, y);
    swap(&x, &y);
    printf("\n after swapping x = %d  y = %d", x, y);
}
