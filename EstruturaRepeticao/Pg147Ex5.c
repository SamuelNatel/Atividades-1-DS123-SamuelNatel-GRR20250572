#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        printf("##### TABUADA DO %d #####\n", i);
        for (j = 0; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, (i * j));
        }
    }

    return 0;
}