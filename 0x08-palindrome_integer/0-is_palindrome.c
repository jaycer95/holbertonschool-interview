#include "palindrome.h"
/**
 *is_palindrome -checks whether or notinteger is a palindrome.
 *@n: the given integer to checks it
 *Return: 1 if palindrome or 0 if not
 */
int is_palindrome(unsigned long n)
{
unsigned int rev = 0;
int tmp = n;
while (tmp != 0)
{
rev = rev * 10 + tmp % 10;
tmp /= 10;
}
if (n == rev)
return (1);
return (0);
}
