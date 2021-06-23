#!/usr/bin/python3
""" Making Change """
import numpy as np


def makeChange(coins, total):
    """ Determine the fewest number of coins needed to meet a given amount """
    if total <= 0:
        return 0
    num = 0
    r = total
    sorted_coins = np.sort(np.array(coins))
    while sorted_coins != [] and r > 0:
        if r < sorted_coins.all():
            return -1
        num += r // sorted_coins[-1]
        r = r % sorted_coins[-1]
        if r == 0:
            return num
        sorted_coins = sorted_coins[:-1]
    return -1
