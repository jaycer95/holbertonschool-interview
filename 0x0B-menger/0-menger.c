#include "menger.h"
/**
* menger - print menger
* @level: level
* Return: void
**/
void menger(int level)
{
int size = pow(3, level);
int i, j, k, m;
char diez;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
diez = '#';
k = i;
for (m = j; m; m /= 3)
{
if (k % 3 == 1 && m % 3 == 1)
diez = ' ';
k = k / 3;
}
printf("%c", diez);
}
printf("\n");
}
}
