//reading principle, rate, years, and compound rate and returning the amount
#include <stdio.h>
#include <math.h>
int main()
{
    float a, p, r, n, q;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter value of P,R,N,Q: \n");
        scanf("%f %f %f %f", &p, &r, &n, &q);

        a = p*(pow((1+r/q),n*q));
        printf("the amount is: %f", a);
    }
    return 0;
}