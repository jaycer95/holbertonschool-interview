#include "palindrome.h"
/**
 *is_palindrome -checks whether or notinteger is a palindrome.
 *@n: the given integer to checks it
 *Return: 1 if palindrome or 0 if not
 */
int is_palindrome(unsigned long n)
{
int rev = 0;
int tmp = n;
int rest;
while (n != 0)
{
rest = n % 10;
rev = rev * 10 + rest;
n /= 10;
}
if (tmp == rev)
return (1);
return (0);
}
