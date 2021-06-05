//calculating approx level of intelligence
#include <stdio.h>
int main()
{
    float i, x, y;

    for (x=5.5, y = 1; x<=12.5, y <= 6; x += 0.5, y += 1)
    {
        i = 2 + (y + 0.5) * x;
        printf("i= %f, y= %f, x=%f \n", i, y, x);
    }
}