//finding population of a town in a decade, that has increased by 10% each year
#include <stdio.h>
int main()
{
    int pop = 100000, year;
    for (year = 1; year <= 10; year++)
    {
        pop = pop + pop * 10 / 100;
        printf("population in year %d: %d \n", year, pop);
    }
}