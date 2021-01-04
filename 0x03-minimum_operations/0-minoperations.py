#!/usr/bin/python3
""" Minimum Operations """


def divisor(n):
    largest_divisor = n
    for l in range(2, n):
        if n % l == 0:
            largest_divisor = l
    return largest_divisor


def minOperations(n):
    i = divisor(n)
    if i == n:
        return n
    m = minOperations(i)
    return m + int(n / i)
