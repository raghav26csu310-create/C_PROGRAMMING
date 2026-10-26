#include <stdio.h>
void pattern(int n)
// code for same line and stars
// { for(int j = 1; j<= n; j++)
//     {for (int i = 1;i<=n;i++)
//     {
//         printf("*");
//     }
// printf("\n");
// }
// }

// code for printing number same as stars
// {
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }
// }

// code for printing number same as stars but in reverse order
// {
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 5; i >= 1; i--)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }
// }

// code for twice lines than star in 1 line
// { for(int j = 1; j<= 2*n; j++)
//     {for (int i = 1;i<=n;i++)
//     {
//         printf("*");
//     }
// printf("\n");
// }
// }

// code for number same number of stars as the number of line it is in
// { for(int j = 1; j<= n; j++)
//     {for (int i = 1;i<=j;i++)
//     {
//         printf("*");
//     }
// printf("\n");
// }
// }

// code for palindrome number
{
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("%d", i);
        }

        for (int k = j - 1; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }
}

// code for reverse the pattern of number of stars equal to number of line it is in
//  {
//      for (int j = 1; j <= n; j++)
//      {
//          for (int i = n; i >= j; i--)
//          {
//              printf("*");
//          }
//          printf("\n");
//      }
//  }

// code for reverse the pattern of number of stars equal to number of line it is in
//  {
//      for (int j = 1; j <= n; j++)
//      {
//          for (int i = n; i >= j; i--)
//          {
//              printf("%d", i);
//          }
//          printf("\n");
//      }
//  }
// code for reverse the pattern of number of stars equal to number of line it is in
// {
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = n; i >= j; i--)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }
// code for number  printed of times the number 
// {
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 1; i <= j; i++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }

int main()
{
    int n;
    printf("enter the number of lines");
    scanf("%d", &n);
    pattern(n);
    return 0;
}