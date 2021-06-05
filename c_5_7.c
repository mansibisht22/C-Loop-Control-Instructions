//TIME WITH SUFFIXES AM AND PM

#include <stdio.h>
int main()
{
    int hour;

    for (hour = 0; hour <= 24; hour++)
    {

        if (hour < 12)
            printf("%dAM ", hour);

        else if (hour >= 12)
            printf("%dPM ", hour);
    }
}