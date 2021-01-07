#!/usr/bin/python3
""" Minimum Operations """


def minOperations(n):
    div = 2
    factors = 0
    while n > 1:
        while n % div == 0:
            factors += div
            n = n // div
        div += 1
    return factors
