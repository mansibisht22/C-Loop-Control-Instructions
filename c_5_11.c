//finding value of log for a given number
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float x, y, sum;

    printf("enter value of X: ");
    scanf("%f", &x);
    for (i = 1; i <= 7; i++)
    {
        y = pow((x - 1) / x, i);
        sum = sum + y;
    }
    printf("the value of log for x is: %f", sum);
    return 0;
}