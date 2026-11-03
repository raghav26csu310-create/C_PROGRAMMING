//C program to check if student is pass or fail using average of his 3 subjects
#include <stdio.h>
int main()
{
    float first, second, third;
    printf("input:\n");
    scanf("%f %f %f", &first, &second, &third);

    int total = first + second + third;
    printf("total:%d\n", total);

    float average = (first + second + third) / 3;
    printf("average:%.2f\n", average);

    if (average >= 40)
    {
        printf("result:pass");
    }
    else
    {
        printf("result:fail");
    }
    return 0;
}




//C program for making a BMI calculator
#include <stdio.h>
int main()
{
    float weight, height;
    printf("input:\n");
    scanf("%f %f", &weight, &height);
    float BMI = weight / (height * height);
    printf("BMI:%.2f", BMI);
    return 0;
}




//C program to calculate simple interest
#include <stdio.h>
int main()
{
    int principal, rate, time;
    printf("principal amount:");
    scanf("%d", &principal);

    printf("rate:");
    scanf("%i", &rate);

    printf("time:");
    scanf("%i", &time);

    float si = (principal * rate * time) / 100;
    printf("simple interest:%.2f", si);
    return 0;
}




//C program using double datatype
#include <stdio.h>
int main()
{
    double myDoubleNum = 19.99;
    printf("%.3f", myDoubleNum);
    return 0;
}





