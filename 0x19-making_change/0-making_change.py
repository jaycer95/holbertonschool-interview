#!/usr/bin/python3
""" Making Change """


def makeChange(coins, total):
    """ Determine the fewest number of coins needed to meet a given amount """
    if total <= 0:
        return 0
    num = 0
    r = total
    coins.sort()
    while coins != []:
        num += r // coins[-1]
        r = r % coins[-1]
        if r == 0:
            return num
        coins.pop()
    return -1
