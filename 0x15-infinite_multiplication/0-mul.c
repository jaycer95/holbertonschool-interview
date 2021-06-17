#include "holberton.h"

/**
 * main - The entry point of the program
 *
 * @argc: The number of arguments
 * @argv: Array of pointers to the arguments
 *
 * Return: 98 on failure, 0 on success
 **/
int main(int argc, char *argv[])
{
int i, len1, len2, len;
char *res;

if (argc != 3)
{
printf("Error");
exit(98);
}

len1 = check_arg(argv[1]);
len2 = check_arg(argv[2]);
len = len1 + len2;
res = malloc(sizeof(char) * (len + 1));
if (!res)
{
printf("Error");
exit(98);
}
for (i = 0; i < len; i++)
{
res[i] = '0';
}
res[i] = '\0';
array_mul(argv[1], argv[2], len1, len2, res);
for (i = 0; res[i] == '0' && res[i + 1]; i++)
{
;
}
printf("%s\n", &res[i]);
free(res);
return (0);
}

/**
 * array_mul - multiply 2 arrays of characters as 2 number
 * @argv1: array1
 * @argv2: array2
 * @len1: len array1
 * @len2: len array2
 * @res: array
 */
void array_mul(char *argv1, char *argv2, int len1, int len2, char *res)
{
int i, j, x, pos;

for (i = len2 - 1; i >= 0; i--)
{
for (j = len1 - 1; j >= 0; j--)
{
pos = i + j + 1;
x = (argv2[i] - '0') * (argv1[j] - '0');
x = x + (res[pos] - '0');
while (x > 0)
{
res[pos] = (x % 10) + '0';
x /= 10;
if (x == 0)
break;
pos--;
x += (res[pos] - '0');
}
}
}
}

/**
 * check_arg - checks if argument is a valid integer
 * @argv: the argument
 * Return: returns the length of argument
 */
int check_arg(char *argv)
{
int i;

for (i = 0; argv[i]; i++)
{
if (argv[i] < '0' || argv[i] > '9')
{
printf("Error");
exit(98);
}
}
return (i);
}
