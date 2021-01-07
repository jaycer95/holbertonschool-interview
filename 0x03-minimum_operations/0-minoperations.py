#!/usr/bin/python3
""" Minimum Operations """


def divisor(n):
    largest_divisor = n
    for ld in range(2, n // 2):
        if n % ld == 0:
            largest_divisor = ld
    return largest_divisor


def minOperations(n):
    i = divisor(n)
    if i == n:
        return n
    return i + int(n / i)
