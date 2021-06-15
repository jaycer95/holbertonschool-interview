#!/usr/bin/python3
""" Rain """


def rain(walls):
    """ calculate how many square units of
    water will be retained after it rains"""
    count = 0
    for i in range(1, len(walls) - 1):
        right = walls[i]
        for k in range(i + 1, len(walls)):
            right = max(right, walls[k])
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])
        count += (min(left, right) - walls[i])
    return count
