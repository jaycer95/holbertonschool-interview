#include "sandpiles.h"
/**
* verification - verify if sandpile is stable
* @a: sandpile
* Return: true or false
**/
bool verification(int a[3][3])
{
int i;
int j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (a[i][j] > 3)
{
return (false);
}
}
}
return (true);
}
/**
* print - print grid
* @a: sandpile
* Return: void
**/
void print(int a[3][3])
{
int i;
int j;
printf("=\n");
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
printf("%d", a[i][j]);
if (j < 2)
{
printf(" ");
}
}
printf("\n");
}
}
/**
* sum - sum of two sandpiles
* @a: sandpile
* @b: sandpile
* Return: void
**/
void sum(int a[3][3], int b[3][3])
{
int i;
int j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
a[i][j] += b[i][j];
}
}
}
/**
* stable - stabalize sandpile
* @a: sandpile
* @tmp: copy of sandpile a
* Return: void
**/
void stable(int a[3][3], int tmp[3][3])
{
int i;
int j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
tmp[i][j] = a[i][j];
}
}
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (tmp[i][j] >= 4)
{
a[i][j] = a[i][j] - 4;
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
}
}
}
}
/**
* sandpiles_sum - stabalized sum of two sandpiles
* @grid1: sandpile 1
* @grid2: sandpile 2
* Return: void
**/
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
