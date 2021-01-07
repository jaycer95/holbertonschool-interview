#!/usr/bin/python3
""" Minimum Operations """


def minOperations(n):
    res = []
    d = 2
    while n %d == 0:
        res.append(d)
        q = n // d
        n = q
    d = 3
    while d <= n:
        while n%d == 0:
            res.append(d)
            q = n // d
            n = q
        d = d + 2
    return sum(res)
