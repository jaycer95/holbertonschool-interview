#include "sandpiles.h"

bool verification(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > 3)
            {
                return (false);
            }
        }
    }
    return (true);
}
void print(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
            if (j < 2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n=\n\n");
}

void sum(int a[3][3], int b[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] += b[i][j];
        }
    }
}
void stable(int a[3][3], int tmp[3][3])
{
    tmp = a;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (tmp[i][j] >= 4)
            {
                if (i >= 1)
                {
                    a[i - 1][j] += 1;
                }
                if (i <= 1)
                {
                    a[i + 1][j] += 1;
                }
                if (j >= 1)
                {
                    a[i][j - 1] += 1;
                }
                if (j <= 1)
                {
                    a[i][j + 1] += 1;
                }
                a[i][j] = a[i][j] - 4;
                }
            }
        }
}

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    int tmp[3][3];
    
    sum(grid1, grid2);
    while (!verification(grid1))
    {
        print(grid1);
        stable(grid1, tmp);
    }
}