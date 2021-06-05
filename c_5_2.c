#include <stdio.h>
int main()
{
    int class, fail, grace;

    printf("Enter class obtained and no. of subjects failed: ");
    scanf("%d %d", &class, &fail);

    switch (class)
    {
    case 1:
        if (fail > 3)
        {
            grace = 0;
            printf("no grace marks: %d", grace);
        }

        else
        {
            grace = 5;
            printf("grace marks: %d", grace);
        }
 break;
    case 2:
        if (fail > 2)
        {
            grace = 0;
            printf("no grace marks: %d", grace);
        }

        else
        {
            grace = 4;
            printf("grace marks: %d", grace);
        }
 break;
    case 3:
        if (fail > 1)
        {
            grace = 0;
            printf("no grace marks: %d", grace);
        }

        else
        {
            grace = 5;
            printf("grace marks: %d", grace);
        }
     break;

    default:
        printf("you entered wrong details.");
    }
    
}
